# Author: Saeel Sakhalkar
#   RollNo: 38
#  Topic: Goa legislative assembly 
#  Start Date: 15 july 2024
#  Modified Date: 22 july 2024
#  Description: The project aims to create a console-based management 
#               system for the Goa Legislative Assembly 
#                 using Object-Oriented Programming (OOP) concepts. 
#               This system allows for the management and display of
#               legislative members, sessions, and bills.

# Provides a console-based user interface for interacting with the Goa Legislative Assembly system.

from member import Member
from session import Session
from bill import Bill
from assembly import Assembly

def main():
    assembly = Assembly()

    while True:
        print("\nGoa Legislative Assembly Menu")
        print("1. Add Member")
        print("2. Add Session")
        print("3. Add Bill")
        print("4. Display Members")
        print("5. Display Sessions")
        print("6. Display Bills")
        print("7. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter member name: ")
            constituency = input("Enter constituency: ")
            party = input("Enter party: ")
            role = input("Enter role: ")
            member = Member(name, constituency, party, role)
            assembly.add_member(member)
        elif choice == '2':
            session_id = input("Enter session ID: ")
            date = input("Enter date: ")
            session = Session(session_id, date)
            assembly.add_session(session)
        elif choice == '3':
            bill_id = input("Enter bill ID: ")
            title = input("Enter bill title: ")
            description = input("Enter description: ")
            status = input("Enter status: ")
            bill = Bill(bill_id, title, description, status)
            assembly.add_bill(bill)
        elif choice == '4':
            assembly.display_members()
        elif choice == '5':
            assembly.display_sessions()
        elif choice == '6':
            assembly.display_bills()
        elif choice == '7':
            break
        else:
            print("Invalid choice, please try again.")

if __name__ == "__main__":
    main()
