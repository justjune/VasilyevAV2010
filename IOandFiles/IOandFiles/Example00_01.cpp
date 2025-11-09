// Простейшее создание и использование  входного и выходного потока по умолчанию

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (true) {
		cin >> s;
		if (s == "q") break;
		cout << s.c_str()<< endl;
	}
	return 0;
}