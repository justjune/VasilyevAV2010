// Статические члены класса
#include<iostream>
using namespace std;
class SimpleClass
{
public:
	//Статическое поле:
	static int m;
	//Нестатическое поле:
	string name;
	int n;
	void show();
} obj1,obj2;

//Повторное объявление переменной:
int SimpleClass::m;

int main()
{
	SimpleClass::m=10; // Инициализация статического поля (общего для всех объектов)
	obj1.n=1;
	obj1.name = "Obj1";
	
	obj2.n=2;
	obj2.name = "Obj2";
	
	obj1.show();
	obj2.show();
	
	obj1.m=100; // Изменение статического поля
	
	obj2.show();
	return 0;
}
//Описание метода:
void SimpleClass::show()
{
	cout << name.c_str() << endl;
	cout << "\tStatic field m = " << m << endl;
	cout<< "\tNonstatic field n = " << n << endl;
}