// ������, ��� �������, ��� ���� - ���������
#include <iostream>
#include<ccomplex>
using namespace std;
//���������� ������� � ����� ���������� ����:
template <class X> void show(X arg){
cout<<"Value is "<<arg<<endl;}
int main(){
int n=5;
double x=3.6;
complex<double> c = { 1,3 };
char s[]="abc";
int i[] = { 0,1 };
//����� ���������� �������:
show(n);
show(x);
show(s);
show(c);
show(i);
return 0;}