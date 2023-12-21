// Приватные члены базового класса - не прямой доступ к ним
#include <iostream>
using namespace std;
class A{ // базовый класс
int m; // поле - приватное
public:
A(int i){m=i;} // конструктор позволяет инициализировать поле
void getm(){   // метод получает извлечь хранимое значение
cout<<"m = "<<m<<endl;}
};
class B:public A{ // производный класс
public:
int n;
B(int i,int j):A(i){n=j;} // конструктор наследника позволяет вызывать К. предка
void getnm(){ // метод для извлечения всех полей иерархии
getm();
cout<<"n = "<<n<<endl;}
};
int main(){
B obj(10,20);
obj.getnm();
return 0;}