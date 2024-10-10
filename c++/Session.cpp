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

// Represents a legislative session containing a list of bills discussed during that session.

#include "Session.h"

Session::Session(const std::string& sessionId, const std::string& date)
    : sessionId(sessionId), date(date) {}

void Session::addBill(const Bill& bill) {
    bills.push_back(bill);
}

void Session::displayInfo() const {
    std::cout << "Session ID: " << sessionId << std::endl;
    std::cout << "Date: " << date << std::endl;
    for (const auto& bill : bills) {
        bill.displayInfo();
    }
}

std::string Session::getSessionId() const {
    return sessionId;
}
