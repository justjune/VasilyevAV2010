// ѕример определени€ и использовани€
// внешнего префиксного оператора инкремента
// с демонстрацией внешней компоновки

#include<iostream>
using namespace std;
#include"MComp.h"
#include"MCompPfPP.h"

int main()
{
	MComp c;
	c.Re = 2.;
	c.Im = 3.;
	cout << c.Re << "+ i " << c.Im << endl;
	cout << "++c:" << endl;
	++c;
	cout << c.Re << "+ i " << c.Im << endl;
}