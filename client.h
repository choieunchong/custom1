#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <iostream>

using namespace std;

class Client {
public:
    Client(int id = 0, string name= "", string PhoneNumber= "", string Address= "");

    string getName() const;
    void setName(string&);
    string getPhoneNumber() const;
    void setPhoneNumber(string&);
    string getAddress() const;
    void setAddress(string&);
    int id() const;
    bool operator==(int id) const;

private:
    int m_id;
    string m_name;
    string m_phoneNumber;
    string m_address;
};
#endif          // __CLIENT_H__