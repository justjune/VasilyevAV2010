// ������ ���������� � ������������� �������������� ������
#include<iostream>
using namespace std;
// ���������� ������ SimpleClass:
class SimpleClass
{
	public:
	// ������������� ���� ������:
	int number;
};

int main()
{
	// �������� ������� MyObj ������ SimpleClass:
	SimpleClass MyObj;
	// ���� ������� ������������� ��������:
	MyObj.number=5;
	cout<<"Object field value is "<<MyObj.number<<"\n";
	return 0;
}