// ���������� ���������� ������� �� ���� ���������� ����������
#include <iostream>
using namespace std;
//���������� �������:
template <class X> X MySum(X a,X b){
return a+b;}
//���������� ���������� �������:
template <class X> X MySum(X a){
return a+1;}
int main(){
int n=2,m=4;
double x=4.2,y=3.4;
char s='a';
//����� ���������� �������:
cout<<MySum(n,m)<<endl;//���������: 6
cout<<MySum(x,y)<<endl;//���������: 7.6
cout<<MySum(s)<<endl;//���������: b
return 0;}