#include "product.h"

#include <iostream>

using namespace std;

Product::Product(int id, string Productname, string productprice, string type)
    : m_id(id), m_Productname(Productname), m_productprice(productprice), m_type(type)
{
}

string Product::getProductName() const
{
    return m_Productname;
}

void Product::setProductName(string& Productname) // ���簡 �Ͼ�� �ʾ� ���۷����� �ӵ��� �޸� �鿡 �־ �� ������.
{
    m_Productname = Productname;
}

string Product::getProductPrice() const
{
    return m_productprice;
}

void Product::setProductPrice(string& productprice)
{
    m_productprice = productprice;
}

string Product::getType() const
{
    return m_type;
}

void Product::setType(string& type)
{
    m_type = type;
}

int Product::id() const
{
    return m_id;
}
