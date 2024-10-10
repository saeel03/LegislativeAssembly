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


using System;
using System.Collections.Generic;

public class Session
{
    private string sessionId;
    private string date;
    private List<Bill> bills;

    public Session(string sessionId, string date)
    {
        this.sessionId = sessionId;
        this.date = date;
        this.bills = new List<Bill>();
    }

    public void AddBill(Bill bill)
    {
        bills.Add(bill);
    }

    public void DisplayInfo()
    {
        Console.WriteLine("Session ID: " + sessionId);
        Console.WriteLine("Date: " + date);
        foreach (var bill in bills)
        {
            bill.DisplayInfo();
        }
    }

    public string GetSessionId()
    {
        return sessionId;
    }
}
