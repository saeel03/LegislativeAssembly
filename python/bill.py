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

# Represents a legislative bill with attributes including ID, title, description, and status.
class Bill:
    def __init__(self, bill_id, title, description, status):
        self.bill_id = bill_id
        self.title = title
        self.description = description
        self.status = status

    def display_info(self):
        print(f"Bill ID: {self.bill_id}")
        print(f"Title: {self.title}")
        print(f"Description: {self.description}")
        print(f"Status: {self.status}")

    def get_bill_id(self):
        return self.bill_id
