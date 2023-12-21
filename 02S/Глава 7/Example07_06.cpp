// ����������� ����� ������
#include<iostream>
using namespace std;
class SimpleClass
{
public:
	//����������� ����:
	static int m;
	//������������� ����:
	string name;
	int n;
	void show();
} obj1,obj2;

//��������� ���������� ����������:
int SimpleClass::m;

int main()
{
	SimpleClass::m=10; // ������������� ������������ ���� (������ ��� ���� ��������)
	obj1.n=1;
	obj1.name = "Obj1";
	
	obj2.n=2;
	obj2.name = "Obj2";
	
	obj1.show();
	obj2.show();
	
	obj1.m=100; // ��������� ������������ ����
	
	obj2.show();
	return 0;
}
//�������� ������:
void SimpleClass::show()
{
	cout << name.c_str() << endl;
	cout << "\tStatic field m = " << m << endl;
	cout<< "\tNonstatic field n = " << n << endl;
}