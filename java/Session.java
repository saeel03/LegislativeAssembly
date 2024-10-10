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

// Represents a legislative session containing a list of bills discussed during that session.

public class Session {
    private String sessionId;
    private String date;
    private List<Bill> bills;

    public Session(String sessionId, String date) {
        this.sessionId = sessionId;
        this.date = date;
        this.bills = new ArrayList<>();
    }

    public void addBill(Bill bill) {
        bills.add(bill);
    }

    public void displayInfo() {
        System.out.println("Session ID: " + sessionId);
        System.out.println("Date: " + date);
        for (Bill bill : bills) {
            bill.displayInfo();
        }
    }

    public String getSessionId() {
        return sessionId;
    }
}
