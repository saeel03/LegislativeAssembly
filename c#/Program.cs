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

// Provides a console-based user interface for interacting with the Goa Legislative Assembly system.
using System;

class Program
{
    static void Main()
    {
        Assembly assembly = new Assembly();

        while (true)
        {
            Console.WriteLine("\nGoa Legislative Assembly Menu");
            Console.WriteLine("1. Add Member");
            Console.WriteLine("2. Add Session");
            Console.WriteLine("3. Add Bill");
            Console.WriteLine("4. Display Members");
            Console.WriteLine("5. Display Sessions");
            Console.WriteLine("6. Display Bills");
            Console.WriteLine("7. Exit");
            Console.Write("Enter your choice: ");

            int choice;
            if (!int.TryParse(Console.ReadLine(), out choice))
            {
                Console.WriteLine("Invalid choice, please try again.");
                continue;
            }

            switch (choice)
            {
                case 1:
                    Console.Write("Enter member name: ");
                    string name = Console.ReadLine();
                    Console.Write("Enter constituency: ");
                    string constituency = Console.ReadLine();
                    Console.Write("Enter party: ");
                    string party = Console.ReadLine();
                    Console.Write("Enter role: ");
                    string role = Console.ReadLine();
                    Member member = new Member(name, constituency, party, role);
                    assembly.AddMember(member);
                    break;

                case 2:
                    Console.Write("Enter session ID: ");
                    string sessionId = Console.ReadLine();
                    Console.Write("Enter date: ");
                    string date = Console.ReadLine();
                    Session session = new Session(sessionId, date);
                    assembly.AddSession(session);
                    break;

                case 3:
                    Console.Write("Enter bill ID: ");
                    string billId = Console.ReadLine();
                    Console.Write("Enter bill title: ");
                    string title = Console.ReadLine();
                    Console.Write("Enter description: ");
                    string description = Console.ReadLine();
                    Console.Write("Enter status: ");
                    string status = Console.ReadLine();
                    Bill bill = new Bill(billId, title, description, status);
                    assembly.AddBill(bill);
                    break;

                case 4:
                    assembly.DisplayMembers();
                    break;

                case 5:
                    assembly.DisplaySessions();
                    break;

                case 6:
                    assembly.DisplayBills();
                    break;

                case 7:
                    return;

                default:
                    Console.WriteLine("Invalid choice, please try again.");
                    break;
            }
        }
    }
}
