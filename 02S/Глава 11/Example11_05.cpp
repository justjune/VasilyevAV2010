// Перекрытие - переопределение невиртуального метода
#include <iostream>
using namespace std;
class A{
public:
int n;
int f(){return 2*n;}
void show(){cout<<"show(): "<<f()<<endl;}
};
class B: public A{
public:
int f(){return n/2;} // метод наследника перекрывает метод базового класса
};
int main(){
A a;
a.n=3;
B b;
b.n=10;
a.show(); // вызов метода базового класса
b.show(); // снова вызов метода базового класса!!!
cout<<"a.f(): "<<a.f()<<endl; // вызов метода базового класса
cout<<"b.f(): "<<b.f()<<endl; // вызов метода наследника
return 0;}