/*
������ ����������� � �������������
������ ������������ ����� � ���������� �����������
� ������������� ������� ����������
*/
#include<iostream>
using namespace std;
#include"Chapter10\Example10_07\MComp.h"
int main(){
MComp a,b,c;
double x=1.5, y=2.5;
a.Re=1;
a.Im=2;
b.Re=2;
b.Im=3;
cout<<"******************";
cout<<"\na.Re = "<<a.Re<<"\na.Im = "<<a.Im<<"\n";
cout<<"******************";
cout<<"\nb.Re = "<<b.Re<<"\nb.Im = "<<b.Im<<"\n";
cout<<"******************";
cout<<"\nx = "<<x<<"\ny = "<<y<<"\n";
cout<<"******************";
//�������� ��������:
c=a+b;
cout<<"\nc=a+b: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//�������� ����� � �������:
c=x+c;
cout<<"\nc=x+c: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//�������� ������� � �����:
c=c+y;
cout<<"\nc=c+y: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� � ���������� �����:
++c;
cout<<"\n++c: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� � ����������� �����:
c++;
cout<<"\nc++: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� ��������:
c=a-b;
cout<<"\nc=a-b: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� �� ����� �������:
c=x-c;
cout<<"\nc=x-c: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� �� ������� �����:
c=c-y;
cout<<"\nc=c-y: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� � ���������� �����:
--c;
cout<<"\n--c: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//��������� � ����������� �����:
c--;
cout<<"\nc--: \n";
cout<<"c.Re = "<<c.Re<<"\nc.Im = "<<c.Im<<"\n";
cout<<"******************";
//����������-�����������:
!a;
cout<<"\n!a: \n";
cout<<"a.Re = "<<a.Re<<"\na.Im = "<<a.Im<<"\n";
cout<<"******************\n";
return 0;
}