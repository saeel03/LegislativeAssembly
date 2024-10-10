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

 

#ifndef BILL_H
#define BILL_H

#include <string>
#include <iostream>

class Bill {
private:
    std::string billId;
    std::string title;
    std::string description;
    std::string status;

public:
    Bill(const std::string& billId, const std::string& title, const std::string& description, const std::string& status);

    void displayInfo() const;
    std::string getBillId() const;
};

#endif // BILL_H
