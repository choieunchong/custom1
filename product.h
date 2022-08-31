#ifndef __PRODUCT_H__ 
#define __PRODUCT_H__

#include <iostream>
using namespace std;

class Product {
public:
    Product(int id = 0,  string Productname = "", string productprice = "", string type = ""); //����Ʈ �Ű�����

    string getProductName() const;
    void setProductName(string&); // Ÿ���� �˷��ֱ� ����
    string getProductPrice() const;
    void setProductPrice(string&);
    string getType() const;
    void setType(string&);
    int id() const;
    string find(string&);


private:
    int m_id;
    string m_Productname;
    string m_productprice;
    string m_type;

};

#endif