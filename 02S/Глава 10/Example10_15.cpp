/*
������ ������ ��� ������ � ���������� 5 ������� 
*/
#include <iostream>
#include <cmath>
using namespace std;
//������� ��������:
const int n=5;
class Polynom{
public:
//������������ ��������:
double a[n+1];
//���������� ��������� "������" (�.�. ()): - ���������� �������� ��������
double operator()(double z){
int i;
double s=0;
for(i=0;i<=n;i++) s+=a[i]*pow(z,i);
return s;}
//���������� ��������� "�������" (�.�. ,): - ���������� ����������� ������� �
Polynom operator,(int k){
int i;
Polynom tmp;
for(i=0;i<=n;i++) tmp.a[i]=a[i];
switch(k){
case 0:
break;
case 1:
for(i=0;i<n;i++)
   tmp.a[i]=tmp.a[i+1]*(i+1);
tmp.a[n]=0;
break;
default:
//��������:
tmp=(tmp,1,k-1);}
return tmp;}
//���������� ��������� ��������:
Polynom operator+(Polynom obj){
Polynom tmp;
for(int i=0;i<=n;i++)
   tmp.a[i]=a[i]+obj.a[i];
return tmp;}
//���������� ��������� ���������:
Polynom operator-(Polynom obj){
Polynom tmp;
for(int i=0;i<=n;i++)
   tmp.a[i]=a[i]-obj.a[i];
return tmp;}
//���������� ��������� ���������:
Polynom operator*(double b){
Polynom tmp;
for(int i=0;i<=n;i++)
   tmp.a[i]=a[i]*b;
return tmp;}
//���������� ��������� �������:
Polynom operator/(double b){
Polynom tmp;
for(int i=0;i<=n;i++)
   tmp.a[i]=a[i]/b;
return tmp;}
//����������� ������:
Polynom(){
for(int i=0;i<=n;i++)
   a[i]=i+1;
}
};
//������� ������� ��� ����������� ������������� ��������:
void show(Polynom obj){
for(int i=0;i<=n;i++)
   cout<<obj.a[i]<<"  ";
cout<<endl;
}
int main(){
//�������� ��������:
Polynom obj1,obj2;
//���������� ��� ���������:
double x=1,y=-1;
//������������ ��������:
cout << "obj1 coeffs: ";
show(obj1);
//������� �� �����:
cout << "obj1/2 = ";
obj1=obj1/2;
show(obj1);
//��������� �� �����:
cout << "obj1*2 = ";
obj1=obj1*2;
show(obj1);
//�������� ��������:
cout << "obj1(1) = ";
cout<<obj1(x)<<endl;
//����������� �� ��������:
cout << "Derivatives: "<<endl;
for(int i=0;i<=3;i++){
   obj2=(obj1,i);
   show(obj2);
}


//�������� �����������:
cout << "d obj1(-1)/dt:" << endl;
cout<<(obj1,1)(y)<<endl;

//�������� ����� ���������:
cout << "obj1 + obj2(1):" << endl;
cout<<(obj1+obj2)(x)<<endl;

//�������� �������� ���������:
cout << "obj1 - obj2(-1):" << endl;
cout<<(obj1-(obj1,1,2))(y)<<endl;
return 0;}