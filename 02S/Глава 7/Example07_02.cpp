#include<iostream>
using namespace std;
// ���������� ������ SimpleClass:
class SimpleClass
{
	public:
	// ������������� ���� ������:
	int number;
}
// �������� �������� MyObj1 � MyObj2 ������ SimpleClass:
MyObj1, MyObj2;
int main()
{
	// ����� �������� ������������� ��������:
	MyObj1.number=5;
	MyObj2.number=++MyObj1.number;
	cout<<"Object1 field value is "<<MyObj1.number<<"\n";
	cout << "Object2 field value is " << MyObj2.number << "\n";
	return 0;
}