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

// Represents a legislative bill with attributes including ID, title, description, and status.
#include "Bill.h"

Bill::Bill(const std::string& billId, const std::string& title, const std::string& description, const std::string& status)
    : billId(billId), title(title), description(description), status(status) {}

void Bill::displayInfo() const {
    std::cout << "Bill ID: " << billId << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Status: " << status << std::endl;
}

std::string Bill::getBillId() const {
    return billId;
}
