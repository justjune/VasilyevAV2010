#include<iostream>
using namespace std;
// Объявление класса SimpleClass:
class SimpleClass
{
	public:
	// Целочисленное поле класса:
	int number;
}
// Создание объектов MyObj1 и MyObj2 класса SimpleClass:
MyObj1, MyObj2;
int main()
{
	// Полям объектов присваиваются значения:
	MyObj1.number=5;
	MyObj2.number=++MyObj1.number;
	cout<<"Object1 field value is "<<MyObj1.number<<"\n";
	cout << "Object2 field value is " << MyObj2.number << "\n";
	return 0;
}