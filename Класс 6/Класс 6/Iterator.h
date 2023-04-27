#pragma once
#include <iostream>
#include "Node.h"
class Iterator {
	friend class List; // Дружественный класс List
	Node* elem;
public:
	Iterator() { elem = nullptr; } // Конструктор по умолчанию
	Iterator(const Iterator& it) { elem = it.elem; } // конструктор копирования
	// присваивание
	Iterator& operator=(const Iterator& a) 
	{
		elem = a.elem;
		return *this;
	}
	bool operator==(const Iterator& it) { return elem == it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; };
	// Перегружение префикс
	Iterator& operator++() // ++ - переход к следующему элементу списка
	{
		elem = elem->next;
		return *this;
	};
	Iterator& operator--()  // -- возвращение к предыдущему элементу списка
	{
		elem = elem->prev;
		return *this;
	}
	Iterator& operator+(const int& a) // Переход на a элементов вправо
	{
		for (int i = 0; i < a; i++) elem = elem->next;
		return *this;
	}
	Iterator& operator-(const int& a) // Переход на a элементов влево
	{
		for (int i = 0; i < a; i++) elem = elem->prev;
		return *this;
	}
	int& operator *() const { return elem->data; } // вывод ключа элемента списка

};