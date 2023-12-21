// Перегрузка конструкторов: два - прошлых и еще один с одним параметром
#include <iostream>
using namespace std;
class MyClass{
public:
int m,n;
//Конструктор класса без аргументов:
MyClass(){
m=0;
n=0;}
//Конструктор класса с одним аргументом:
MyClass(int a){
m=a;
n=a;}
//Конструктор класса с двумя аргументами:
MyClass(int a,int b){
m=a;
n=b;}
//Конструктор копии:
MyClass(MyClass const &obj) {
	cout << "This is copy of MyClass obj:" << endl;
	m = obj.m;
	n = obj.n;
	show();
}
void show(){
cout<<"m = "<<m<<endl;
cout<<"n = "<<n<<endl;}
};
int main(){
//Разные способы создания объектов:
MyClass obj1;
MyClass obj2(1);
MyClass obj3(2,3);
MyClass obj4 = obj3; // Вызов конструктора копии
MyClass obj5(MyClass(7, 8));
//Отображение значения полей объектов:
obj1.show();
obj2.show();
obj3.show();
obj5.show();
return 0;
}