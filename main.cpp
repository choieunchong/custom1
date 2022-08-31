#include <iostream>
#include "client.h"
#include "clientmanager.h"
#include "product.h"
#include "productManager.h"

int main()
{
    do {


    }

    while (true);


    ClientManager cm;
    ProductManager pm;

    //    ProductManager pm;
    //    Shoplist sl;

    for (int i = 0; i < 5; i++) {
        cm.inputClient();
        cout << endl;
    }
  
    cm.displayInfo();
    pm.displayInfo();

    return 0;
}