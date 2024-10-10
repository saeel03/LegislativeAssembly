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

# Manages collections of members, sessions, and bills, providing methods to add and display them.
class Assembly:
    def __init__(self):
        self.members = []
        self.sessions = []
        self.bills = []

    def add_member(self, member):
        self.members.append(member)

    def add_session(self, session):
        self.sessions.append(session)

    def add_bill(self, bill):
        self.bills.append(bill)

    def display_members(self):
        for member in self.members:
            member.display_info()

    def display_sessions(self):
        for session in self.sessions:
            session.display_info()

    def display_bills(self):
        for bill in self.bills:
            bill.display_info()
