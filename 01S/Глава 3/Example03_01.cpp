// ������������� ����������
#include <iostream>
using namespace std;
int main(){
int *q,n,*p;
n=100;
p=&n; // 1�� ���������
q=p; // 2�� ���������
(*p)++; // �������� � ������� ������ ���������
cout<<*q<<"\n";
cout<<n<<"\n";
cout<<p<<"\n"; // ������ �������� ���������
return 0;
}