class Member:
    def __init__(self, name, constituency, party, role):
        self.name = name
        self.constituency = constituency
        self.party = party
        self.role = role

    def display_info(self):
        print(f"Name: {self.name}")
        print(f"Constituency: {self.constituency}")
        print(f"Party: {self.party}")
        print(f"Role: {self.role}")

    def get_name(self):
        return self.name
