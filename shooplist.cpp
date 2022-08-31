#include "shooplist.h"
#include "client.h"
#include "product.h"

#include <iostream>

using namespace std;


string m_Date; // 구매일자
string m_Quantity; // 구매수량

ShoopList::ShoopList(string Date, string Quantity, string Type)
    : m_Date(Date), m_Quantity(Quantity), m_Type(Type)
{
}

string ShoopList::getDate() const
{
    return m_Date;
}

void ShoopList::setDate(string& Date) // 복사가 일어나지 않아 레퍼런스가 속도와 메모리 면에 있어서 더 빠르다.
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
