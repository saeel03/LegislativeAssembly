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

//Manages collections of members, sessions, and bills, providing methods to add and display them.

#include "Assembly.h"

void Assembly::addMember(const Member& member) {
    members.push_back(member);
}

void Assembly::addSession(const Session& session) {
    sessions.push_back(session);
}

void Assembly::addBill(const Bill& bill) {
    bills.push_back(bill);
}

void Assembly::displayMembers() const {
    for (const auto& member : members) {
        member.displayInfo();
    }
}

void Assembly::displaySessions() const {
    for (const auto& session : sessions) {
        session.displayInfo();
    }
}

void Assembly::displayBills() const {
    for (const auto& bill : bills) {
        bill.displayInfo();
    }
}
