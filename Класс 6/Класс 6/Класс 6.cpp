#include "List.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
	setlocale(0, "ru");
	srand(time(NULL));
	List a(10);
	cout << "Первый список: ";
	cout << a << endl;
	cout << "Первый элемент списка (доступ к элементу списка по индексу): " << a.front() << endl;
	for (int i = 0; i < a(); i++) a[i] = rand() % 100 - 40;
	cout << "Новый список: ";
	cout << a << endl;
	List b(a); 
	cout << "Список скопирован: ";
	cout << b << endl;
	int num;
	cout << "Введите целое число, которое будет добавлено в конец: "; 
	cin >> num;
	b.pushback(num);
	b.popfront();
	cout << "Список с удалённым первым элементом и добавленным в конец: ";
	for (Iterator iter = b.first(); iter != b.last(); ++iter) cout << *iter << " ";
	return 0;
}
