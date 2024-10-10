#ifndef ASSEMBLY_H
#define ASSEMBLY_H

#include <vector>
#include "Member.h"
#include "Session.h"
#include "Bill.h"

class Assembly {
private:
    std::vector<Member> members;
    std::vector<Session> sessions;
    std::vector<Bill> bills;

public:
    void addMember(const Member& member);
    void addSession(const Session& session);
    void addBill(const Bill& bill);
    void displayMembers() const;
    void displaySessions() const;
    void displayBills() const;
};

#endif // ASSEMBLY_H
