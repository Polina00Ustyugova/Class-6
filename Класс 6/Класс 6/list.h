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
	int front(); // вперёд
	int back(); // назад
	void pushback(int data); // добавить спереди
	void pushfront(int data); // добавить сзади
	void popback(); // убрать сзади
	void popfront(); // добавить спереди
	bool empty(); // если пустой
	List& operator=(const List&); // перегруженная функция присваивания
	int& operator[](int index);
	int& operator()();
	List operator*(List&);
	friend ostream& operator <<(ostream&, const List&);
	friend istream& operator >>(istream&, const List&);
	Iterator first() { return beg; }
	Iterator last() { return end; }
};