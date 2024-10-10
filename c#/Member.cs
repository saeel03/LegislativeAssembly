using System;

public class Member
{
    private string name;
    private string constituency;
    private string party;
    private string role;

    public Member(string name, string constituency, string party, string role)
    {
        this.name = name;
        this.constituency = constituency;
        this.party = party;
        this.role = role;
    }

    public void DisplayInfo()
    {
        Console.WriteLine("Name: " + name);
        Console.WriteLine("Constituency: " + constituency);
        Console.WriteLine("Party: " + party);
        Console.WriteLine("Role: " + role);
    }

    public string GetName()
    {
        return name;
    }
}
