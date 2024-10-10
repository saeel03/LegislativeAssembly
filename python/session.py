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

# Represents a legislative session containing a list of bills discussed during that session.

class Session:
    def __init__(self, session_id, date):
        self.session_id = session_id
        self.date = date
        self.bills = []

    def add_bill(self, bill):
        self.bills.append(bill)

    def display_info(self):
        print(f"Session ID: {self.session_id}")
        print(f"Date: {self.date}")
        for bill in self.bills:
            bill.display_info()

    def get_session_id(self):
        return self.session_id
