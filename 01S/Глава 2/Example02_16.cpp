// ������ ���������� ������, ��� "�������" ������������������
#include <iostream>
#include <cmath>
using namespace std;
//������� ����:
const int N=100;
int main(){
//�������� ������� � "�������" ����������:
double x,q,s=0;
//��������� ����������:
int n;
cout<<"Enter x = ";
cin>>x;
q=x;
//���������� ������:
for(n=1;n<=N;n++){
   s+=q;
   q*=(-1)*x*x/(2*n)/(2*n+1);
}
//���������:
cout<<"Calculated sin("<<x<<") = "<<s<<endl;
cout << "Library sin(" << x << ") = " << sin(x) << endl;
return 0;
}