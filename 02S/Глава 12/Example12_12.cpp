// ������:
// ������ � ������������� ����������� ��� ����������� ������������ �������
// �������� ������� � ��������� [] ���� �������������

#include <iostream>
using namespace std;
//������ ����-�������:

template <class X, const int n = 10> class MyClass{
public:
//����-������:
X array[n];
//���������� ��������� []:
X operator[](int k){
return array[k%n];} // ��� ����� ����������� ��� �� �������� � ������ �� �������!
//���������� ��������� ++:
MyClass operator++(){
int i;
X tmp=array[n-1]; // �������� ��������� �������
for(i=n-1;i>0;i--)
   array[i]=array[i-1]; // ������� ��� ���������� �� ������� ������
array[0]=tmp;
return *this;} // ���������� ��� ��������� ������
//����� ��� ����������� �������:
void show(){
for(int i=0;i<n;i++)
   cout<<array[i]<<" ";
cout<<endl;}
//����������� ������:
MyClass(){
for(int i=0;i<n;i++)
   array[i]=(X)(rand()%25+100); //��� ��� ������ ������ ������ ����?
}
};
int main(){
MyClass<int> obj1;
obj1.show();
for(int i=1000;i<1020;i++) // ��� ����� ������� ��������!
   cout<<obj1[i]<<" ";
cout<<endl;
MyClass<char> obj2;
obj2.show();
++obj2;
obj2.show();
return 0;}