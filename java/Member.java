// Author: Saeel Sakhalkar
// RollNo: 38
// Topic: Goa legislative assembly 
// Start Date: 15 july 2024
// Modified Date: 22 july 2024
// Description: The project aims to create a console-based management 
//              system for the Goa Legislative Assembly 
//              using Object-Oriented Programming (OOP) concepts. 
//              This system allows for the management and display of
//              legislative members, sessions, and bills.

// Represents a legislative member with details such as name, constituency, party, and role.

public class Member {
    private String name;
    private String constituency;
    private String party;
    private String role;

    public Member(String name, String constituency, String party, String role) {
        this.name = name;
        this.constituency = constituency;
        this.party = party;
        this.role = role;
    }

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Constituency: " + constituency);
        System.out.println("Party: " + party);
        System.out.println("Role: " + role);
    }

    public String getName() {
        return name;
    }
}
