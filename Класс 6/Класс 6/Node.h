#pragma once
#include <iostream>
using namespace std;

struct Node // ������� ������
{
	Node* prev = nullptr, * next = nullptr;
	int data = 0;
};

