// ������ ������������� � ������������ ��� �������� ��������� ��������
// ���� ����������� "������", ������ ��� �� ��������� ��� ������������� �������
#include <iostream>
using namespace std;
class MyClass{
public:
int m,n;
//����������� ������:
MyClass(int a,int b){
m=a;
n=b;
cout<<"Object "<<this<<" has been created"<<endl;
cout<<"m = "<<m<<endl;
cout<<"n = "<<n<<endl;
}
//���������� ������:
~MyClass(){
cout<<"Object "<<this<<" has been deleted"<<endl;}
};
//� ������� ��������� ������:
MyClass MyFunc(int x,int y){
	cout << "in func" << endl;
MyClass tmp(x,y);
cout << "out func" << endl;
return tmp;}
int main(){
//�������� �������:
	cout << "s27" << endl;
MyClass obj(1,2);
//��������� �������:
cout << "s30" << endl;
obj=MyFunc(3,4);
cout << "s32" << endl;
return 0;
}