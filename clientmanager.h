#include <vector>
#include<map>
#include "client.h"

class ClientManager {
public:
    ClientManager();

    void inputClient();
    Client* search(int);
    int makeId();
    void displayInfo();
    void deleteClient(int key);
    void addClient(Client*);
    void modifyClient(int key);

private:
    map<int, Client*> clientList;

 //   vector<Client*> clientList;
    //    Client clientList[100];
};