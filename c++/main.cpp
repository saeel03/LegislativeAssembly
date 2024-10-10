// Author: Saeel Sakhalkar
//   RollNo: 38
//  Topic: Goa legislative assembly 
//  Start Date: 15 july 2024
//  Modified Date: 22 july 2024
//  Description: The project aims to create a console-based management 
//               system for the Goa Legislative Assembly 
//                 using Object-Oriented Programming (OOP) concepts. 
//               This system allows for the management and display of
//               legislative members, sessions, and bills.

//Provides a console-based user interface for interacting with the Goa Legislative Assembly system.

#include <iostream>
#include <string>
#include "Member.h"
#include "Session.h"
#include "Bill.h"
#include "Assembly.h"

int main() {
    Assembly assembly;

    while (true) {
        std::cout << "\nGoa Legislative Assembly Menu" << std::endl;
        std::cout << "1. Add Member" << std::endl;
        std::cout << "2. Add Session" << std::endl;
        std::cout << "3. Add Bill" << std::endl;
        std::cout << "4. Display Members" << std::endl;
        std::cout << "5. Display Sessions" << std::endl;
        std::cout << "6. Display Bills" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore(); // Consume newline character

        switch (choice) {
            case 1: {
                std::string name, constituency, party, role;
                std::cout << "Enter member name: ";
                std::getline(std::cin, name);
                std::cout << "Enter constituency: ";
                std::getline(std::cin, constituency);
                std::cout << "Enter party: ";
                std::getline(std::cin, party);
                std::cout << "Enter role: ";
                std::getline(std::cin, role);
                Member member(name, constituency, party, role);
                assembly.addMember(member);
                break;
            }
            case 2: {
                std::string sessionId, date;
                std::cout << "Enter session ID: ";
                std::getline(std::cin, sessionId);
                std::cout << "Enter date: ";
                std::getline(std::cin, date);
                Session session(sessionId, date);
                assembly.addSession(session);
                break;
            }
            case 3: {
                std::string billId, title, description, status;
                std::cout << "Enter bill ID: ";
                std::getline(std::cin, billId);
                std::cout << "Enter bill title: ";
                std::getline(std::cin, title);
                std::cout << "Enter description: ";
                std::getline(std::cin, description);
                std::cout << "Enter status: ";
                std::getline(std::cin, status);
                Bill bill(billId, title, description, status);
                assembly.addBill(bill);
                break;
            }
            case 4:
                assembly.displayMembers();
                break;
            case 5:
                assembly.displaySessions();
                break;
            case 6:
                assembly.displayBills();
                break;
            case 7:
                return 0;
            default:
                std::cout << "Invalid choice, please try
