#include <bits/stdc++.h>
using namespace std;

class Contact
{
private:
    string name;
    string phone_number;

public:
    Contact(string n, string p) : name(n), phone_number(p) {}
    Contact() {}

    void setName(string n)
    {
        name = n;
    }

    void setPhoneNumber(string p)
    {
        phone_number = p;
    }

    string getName() const
    {
        return name;
    }

    string getPhoneNumber() const
    {
        return phone_number;
    }

    friend ostream &operator<<(ostream &os, const Contact &contact);
};

ostream &operator<<(ostream &os, const Contact &contact)
{
    os << contact.name << ": " << contact.phone_number;
    return os;
}

class ContactList
{
private:
    map<string, Contact> contacts;

public:
    void addContact(Contact contact)
    {
        contacts[contact.getName()] = contact;
    }

    void removeContact(string name)
    {
        contacts.erase(name);
    }

    void printContacts() const
    {
        for (auto const &[key, val] : contacts)
        {
            cout << val << endl;
        }
    }

    Contact &operator[](const string &name)
    {
        return contacts[name];
    }

    const Contact &operator[](const string &name) const
    {
        return contacts.at(name);
    }

    size_t size() const
    {
        return contacts.size();
    }
};

int main()
{
    ContactList myContacts;
    myContacts.addContact(Contact("A", "1234567890"));
    myContacts.addContact(Contact("B", "2345678901"));
    myContacts.addContact(Contact("Ce", "3456789012"));
    myContacts.printContacts();

    cout << "Number of contacts: " << myContacts.size() << endl;

    cout << "B's phone number is: " << myContacts["B"].getPhoneNumber() << endl;

    myContacts["C"].setPhoneNumber("9999999999");
    cout << "C's new phone number is: " << myContacts["C"].getPhoneNumber() << endl;

    myContacts.removeContact("A");
    cout << "Number of contacts after removing A: " << myContacts.size() << endl;
    myContacts.printContacts();

    return 0;
}
