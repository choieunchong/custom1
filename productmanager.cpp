#include <vector>
#include <algorithm>
#include<string>
#include<sstream>
#include "product.h"
#include "productmanager.h"
#include <utility>

using namespace std;

ProductManager::ProductManager() {

}

void ProductManager::inputProduct()
{
	string name, number, type;
	cout << "name: "; cin >> name;
	cout << "number: "; cin >> number;
	cout << "type: "; cin >> type;

	int id = makeId();
	Product* p = new Product(id, name, number, type);
	ProductList.insert({ id, p }) ;
}

Product* ProductManager::search(int id) {
	return ProductList[id];
}

void ProductManager::displayInfo()
{
	for (const auto& v : ProductList) {
		Product* p = v.second;
		cout << p->id() << " : " << p->getProductName() << " / " << p->getProductPrice() <<" /" << p-> getType() <<endl;
	}
}

void ProductManager::addProduct(Product* p)
{
	ProductList.insert({ p->id(), p });
}

Product* ProductManager::find( string name) { // 제품 이름 찾는 함수
	//for (auto itr = ProductList.find( name); itr != ProductList.end(); itr++) {

	for (auto itr = ProductList.begin(); itr != ProductList.end(); itr++) {
		if (name == (*itr).second->getProductName()) {

		}
	}
	//if (SProductList.find(name)!= SProductList.end()) {
	//	
	//}

	//if (SProductList.find(name) != SProductList.end()) {
	//	cout << SProductList.find(name)->second->getProductName();
	//}
}

int ProductManager::makeId()
{
	auto key = ProductList.end();
	
	if (ProductList.size() == 0) {
		return 0;
	}
	else {
		int id = (key) ->first;
		return ++id;
	}

}