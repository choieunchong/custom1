#ifndef __SHOOPLIST_H__ 
#define __SHOOPLIST_H__ 

#include <iostream>
using namespace std;

class ShoopList {
public:
	ShoopList(string="", string = "", string = "");

	string getDate() const;
	void setDate(string&);
	string getQuantity() const;
	void setQuantity(string&);

	string getType()const;
	void setType(string&);

private:
	string m_Date; // ��������
	string m_Quantity; // ���ż���
	string m_Type; // ��ǰ�� ����
};


#endif          //
