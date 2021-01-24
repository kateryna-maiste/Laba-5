// лаба 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	
	setlocale(LC_ALL, "rus");
	string s;
	cout << "Строчная: ";
	cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++)
		s[i] = (int)s[i] - 32;
	cout << "Прописная:" << s;

	return 0;
	system("pause");

}