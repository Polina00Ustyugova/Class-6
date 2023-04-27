#pragma once
#include <iostream>
using namespace std;

struct Node // элемент списка
{
	Node* prev = nullptr, * next = nullptr;
	int data = 0;
};

