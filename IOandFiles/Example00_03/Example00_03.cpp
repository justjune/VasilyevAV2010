// Простейшее перенаправление входного потока по умолчанию в файл
// Отладка\Свойства\Отладка\Аргументы команды  <Text.txt
// Добавить >TextOut.txt
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (true) {
		cin >> s;
		if (s == "q") break;
		cout << s.c_str() << endl;
	}
	return 0;
}