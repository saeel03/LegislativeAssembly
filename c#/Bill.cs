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

// Represents a legislative bill with attributes including ID, title, description, and status.
using System;

public class Bill
{
    private string billId;
    private string title;
    private string description;
    private string status;

    public Bill(string billId, string title, string description, string status)
    {
        this.billId = billId;
        this.title = title;
        this.description = description;
        this.status = status;
    }

    public void DisplayInfo()
    {
        Console.WriteLine("Bill ID: " + billId);
        Console.WriteLine("Title: " + title);
        Console.WriteLine("Description: " + description);
        Console.WriteLine("Status: " + status);
    }

    public string GetBillId()
    {
        return billId;
    }
}
