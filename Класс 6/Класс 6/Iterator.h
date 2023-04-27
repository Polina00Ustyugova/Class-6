#pragma once
#include <iostream>
#include "Node.h"
class Iterator {
	friend class List; // ������������� ����� List
	Node* elem;
public:
	Iterator() { elem = nullptr; } // ����������� �� ���������
	Iterator(const Iterator& it) { elem = it.elem; } // ����������� �����������
	// ������������
	Iterator& operator=(const Iterator& a) 
	{
		elem = a.elem;
		return *this;
	}
	bool operator==(const Iterator& it) { return elem == it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; };
	// ������������ �������
	Iterator& operator++() // ++ - ������� � ���������� �������� ������
	{
		elem = elem->next;
		return *this;
	};
	Iterator& operator--()  // -- ����������� � ����������� �������� ������
	{
		elem = elem->prev;
		return *this;
	}
	Iterator& operator+(const int& a) // ������� �� a ��������� ������
	{
		for (int i = 0; i < a; i++) elem = elem->next;
		return *this;
	}
	Iterator& operator-(const int& a) // ������� �� a ��������� �����
	{
		for (int i = 0; i < a; i++) elem = elem->prev;
		return *this;
	}
	int& operator *() const { return elem->data; } // ����� ����� �������� ������

};