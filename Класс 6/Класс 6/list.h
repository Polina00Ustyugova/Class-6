#include <iostream>
#include "Node.h"
#include "Iterator.h"

class List 
{
	int size;
	Node* head = nullptr, * tail = nullptr;
	Iterator beg, end;
public:
	List();
	List(int s, int k = 0);
	List(const List&);
	~List();
	int front(); // �����
	int back(); // �����
	void pushback(int data); // �������� �������
	void pushfront(int data); // �������� �����
	void popback(); // ������ �����
	void popfront(); // �������� �������
	bool empty(); // ���� ������
	List& operator=(const List&); // ������������� ������� ������������
	int& operator[](int index);
	int& operator()();
	List operator*(List&);
	friend ostream& operator <<(ostream&, const List&);
	friend istream& operator >>(istream&, const List&);
	Iterator first() { return beg; }
	Iterator last() { return end; }
};