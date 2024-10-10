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

// Manages collections of members, sessions, and bills, providing methods to add and display them.

using System;
using System.Collections.Generic;

public class Assembly
{
    private List<Member> members;
    private List<Session> sessions;
    private List<Bill> bills;

    public Assembly()
    {
        this.members = new List<Member>();
        this.sessions = new List<Session>();
        this.bills = new List<Bill>();
    }

    public void AddMember(Member member)
    {
        members.Add(member);
    }

    public void AddSession(Session session)
    {
        sessions.Add(session);
    }

    public void AddBill(Bill bill)
    {
        bills.Add(bill);
    }

    public void DisplayMembers()
    {
        foreach (var member in members)
        {
            member.DisplayInfo();
        }
    }

    public void DisplaySessions()
    {
        foreach (var session in sessions)
        {
            session.DisplayInfo();
        }
    }

    public void DisplayBills()
    {
        foreach (var bill in bills)
        {
            bill.DisplayInfo();
        }
    }
}
