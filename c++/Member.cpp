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




#include "Member.h"

Member::Member(const std::string& name, const std::string& constituency, const std::string& party, const std::string& role)
    : name(name), constituency(constituency), party(party), role(role) {}

void Member::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Constituency: " << constituency << std::endl;
    std::cout << "Party: " << party << std::endl;
    std::cout << "Role: " << role << std::endl;
}

std::string Member::getName() const {
    return name;
}
