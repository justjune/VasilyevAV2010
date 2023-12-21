/*
Пример определения и использования
внешнего оператора логического отрицания
с демонстрацией внешней компоновки
*/
#include<iostream>
using namespace std;
#include"..\Example10_04\MComp.h"
#include"MCompNg.h"

int main()
{
	MComp c;
	c.Re = 2.;
	c.Im = 3.;
	cout << c.Re << "+ i " << c.Im << endl;
	cout << "!c:" << endl;
	!c;
	cout << c.Re << "+ i " << c.Im << endl;
}