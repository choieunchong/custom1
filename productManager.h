#include<vector>
#include<map>
#include "product.h"

class ProductManager {
public:
	ProductManager();

	void inputProduct();
	Product* search(int);
	int makeId();
	void displayInfo();
	void addProduct(Product*);
	Product* find(string);

private:
	map<int, Product*> ProductList;
	map<string, Product*> SProductList;


};