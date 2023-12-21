// Работа конструкторов и деструкторов при создании временных объектов
// Один конструктор "пропал", потому что он создается для нобъявленного объекта
#include <iostream>
using namespace std;
class MyClass{
public:
int m,n;
//Конструктор класса:
MyClass(int a,int b){
m=a;
n=b;
cout<<"Object "<<this<<" has been created"<<endl;
cout<<"m = "<<m<<endl;
cout<<"n = "<<n<<endl;
}
//Деструктор класса:
~MyClass(){
cout<<"Object "<<this<<" has been deleted"<<endl;}
};
//В функции создается объект:
MyClass MyFunc(int x,int y){
	cout << "in func" << endl;
MyClass tmp(x,y);
cout << "out func" << endl;
return tmp;}
int main(){
//Создание объекта:
	cout << "s27" << endl;
MyClass obj(1,2);
//Изменение объекта:
cout << "s30" << endl;
obj=MyFunc(3,4);
cout << "s32" << endl;
return 0;
}