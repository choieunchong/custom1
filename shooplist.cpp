#include "shooplist.h"
#include "client.h"
#include "product.h"

#include <iostream>

using namespace std;


string m_Date; // ��������
string m_Quantity; // ���ż���

ShoopList::ShoopList(string Date, string Quantity, string Type)
    : m_Date(Date), m_Quantity(Quantity), m_Type(Type)
{
}

string ShoopList::getDate() const
{
    return m_Date;
}

void ShoopList::setDate(string& Date) // ���簡 �Ͼ�� �ʾ� ���۷����� �ӵ��� �޸� �鿡 �־ �� ������.
{
    m_Date = Date;
}

string ShoopList::getQuantity() const
{
    return m_Quantity;
}

void ShoopList::setQuantity(string& Quantity)
{
    m_Quantity = Quantity;
}

string ShoopList::getType()const 
{

}
void ShoopList::setType(string& Type)
{
    m_Type = Type;
}
