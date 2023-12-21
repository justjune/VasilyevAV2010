/*
Пример определения и использования
класса комплексного числа с операторами
инкремента, определенными внутри класса
с демонстрацией внешней компоновки
*/
#include"..\..\Example10_09.h"
#include<iostream>
using namespace std;
int main()
{
	MComp c;
	c.Re = 1.;
	c.Im = 2.;

	cout << c.Re << " +i " << c.Im << endl;

	++c;
	cout << "++c: " << c.Re << " +i " << c.Im << endl;

	c++;
	cout << "c++: " << c.Re << " +i " << c.Im << endl;

}