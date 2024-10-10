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

//Represents a legislative member with details such as name, constituency, party, and role.
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <iostream>

class Member {
private:
    std::string name;
    std::string constituency;
    std::string party;
    std::string role;

public:
    Member(const std::string& name, const std::string& constituency, const std::string& party, const std::string& role);

    void displayInfo() const;
    std::string getName() const;
};

#endif // MEMBER_H
