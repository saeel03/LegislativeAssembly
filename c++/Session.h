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


#ifndef SESSION_H
#define SESSION_H

#include <string>
#include <vector>
#include "Bill.h"

class Session {
private:
    std::string sessionId;
    std::string date;
    std::vector<Bill> bills;

public:
    Session(const std::string& sessionId, const std::string& date);

    void addBill(const Bill& bill);
    void displayInfo() const;
    std::string getSessionId() const;
};

#endif // SESSION_H
