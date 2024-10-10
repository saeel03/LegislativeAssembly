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

import java.util.ArrayList;
import java.util.List;

// Manages collections of members, sessions, and bills, providing methods to add and display them.

public class Assembly {
    private List<Member> members;
    private List<Session> sessions;
    private List<Bill> bills;

    public Assembly() {
        this.members = new ArrayList<>();
        this.sessions = new ArrayList<>();
        this.bills = new ArrayList<>();
    }

    public void addMember(Member member) {
        members.add(member);
    }

    public void addSession(Session session) {
        sessions.add(session);
    }

    public void addBill(Bill bill) {
        bills.add(bill);
    }

    public void displayMembers() {
        for (Member member : members) {
            member.displayInfo();
        }
    }

    public void displaySessions() {
        for (Session session : sessions) {
            session.displayInfo();
        }
    }

    public void displayBills() {
        for (Bill bill : bills) {
            bill.displayInfo();
        }
    }
}
