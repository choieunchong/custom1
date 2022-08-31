#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include "client.h"
#include "clientmanager.h"

using namespace std;

ClientManager::ClientManager()
{
}

void ClientManager::inputClient()
{
    string name, number, address;
    cout << "name : "; cin >> name;
    cout << "number : "; cin >> number;
    cout << "address : "; cin.ignore(); getline(cin, address, '\n'); cin >> address;

    //cin.ignore(); 
    //getline(cin, address, '\n'); 

    int id = makeId();
    Client* c = new Client(id, name, number, address);
    clientList.insert({ id, c });
}

Client* ClientManager::search(int id)
{
    return clientList[id];
}
void showMenu() {
    cout << "======================\n";
    cout << "1. \n";
    cout << "2. \n";
    cout << "3. \n";
    cout << "4. \n";
}


void ClientManager::displayInfo()
{
    for (const auto& v : clientList) {
        Client* c = v.second;
        cout << c->id() << " : " << c->getName() << " / " << c->getPhoneNumber() << c->getAddress() <<endl;
    }
}

void ClientManager::deleteClient(int key)
{
    clientList.erase(key);
}

void ClientManager::modifyClient(int key)
{
    Client* c = search(key);
    cout << "  ID  |     Name     | Phone Number |       Address" << endl;
    cout << setw(5) << setfill('0') << right << c->id() << " | " << left;
    cout << setw(12) << setfill(' ') << c->getName() << " | ";
    cout << setw(12) << c->getPhoneNumber() << " | ";
    cout << c->getAddress() << endl;

    string name, number, address;
    cout << "name : "; cin >> name;
    cout << "number : "; cin >> number;
    cout << "address : "; cin.ignore(); getline(cin, address, '\n'); //cin >> address;

    c->setName(name);
    c->setPhoneNumber(number);
    c->setAddress(address);
    clientList[key] = c;

}
void ClientManager::addClient(Client* c)
{
    clientList.insert({ c->id(), c });
}

int ClientManager::makeId() //id ¸¸µé±â
{
    auto key = clientList.end();
    if (clientList.size() == 0) {
        return 0;
    }
    else {
        int id = (--key)->first;
        return ++id;
    }
}