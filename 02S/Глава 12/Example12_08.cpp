// ����� ������������� ����������� ������
#include <iostream>
using namespace std;
//���������� �����:
template <class X> class MyClass{
X value;
public:
MyClass(X m){
value=m;}
void set(X m){value=m;}
void get(){
cout<<"value = "<<value<<endl;}
};
//����� ������������� ����������� ������:
template <> class MyClass<int>{
public:
int value;
MyClass(){
value=5;}
};
int main(){
//�������� ������� � int-�����:
MyClass<int> a;
cout<<"value = "<<a.value<<endl;
a.value=3;
// a.set(5); �������� � ������: ������ ������ � ������������� ���!
cout<<"value = "<<a.value<<endl;
//�������� ������� � char-�����:
MyClass<char> b('x');
b.get();
b.set('z');
b.get();
return 0;}