// Чистая виртуальная функция - функция без тела
#include <iostream>
#include <cmath>
using namespace std;
const double pi=3.1415;
class Figure{
public:
double R;
Figure(){R=1;}
virtual double area()=0; // чистая виртуальная функция
}; // наличие лишь одно ЧВФ делает класс абстрактным!
class Circle:public Figure{ // наследования от абстрактного класса
public:
double area(){
return pi*R*R;}
};
class Square:public Figure{ // еще одно наследование от абстрактного класса
public:
double area(){
return R*R;}
};
class Triangle:public Figure{ // еще одно наследование от того же предка
public:
double area(){
return sqrt(3)*R*R/4;}
};
int main(){
Circle A;
Square B;
Triangle C;
cout<<"Circle: "<<A.area()<<endl;
cout<<"Square: "<<B.area()<<endl;
cout<<"Triangle: "<<C.area()<<endl;
return 0;}