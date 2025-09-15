// Определение амплитуды маятника по заданной частоте
#include<iostream>
#include <cmath>
using namespace std;
int main(){
//Частота колебаний:
double omega=0.2;
//Параметры задачи:
double A1,t1,k;
//Амплитуда и начальна¤ фаза:
double A,phi0;
//Ввод параметров:
cout<<"Enter t1 = ";
cin>>t1; // начальный момент времени
cout<<"Enter A1 = ";
cin>>A1; // координата ма¤тника
cout<<"Enter k = ";
cin>>k;
phi0=asin(1/k);
A=A1/sin(omega*t1+phi0);
cout<<"Amplitude A = "<<A<<"\n";
return 0;
}