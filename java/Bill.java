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


// Represents a legislative bill with attributes including ID, title, description, and status.
public class Bill {
    private String billId;
    private String title;
    private String description;
    private String status;

    public Bill(String billId, String title, String description, String status) {
        this.billId = billId;
        this.title = title;
        this.description = description;
        this.status = status;
    }

    public void displayInfo() {
        System.out.println("Bill ID: " + billId);
        System.out.println("Title: " + title);
        System.out.println("Description: " + description);
        System.out.println("Status: " + status);
    }

    public String getBillId() {
        return billId;
    }
}
