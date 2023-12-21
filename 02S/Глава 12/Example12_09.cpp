// Обобщенные и обычные типы в параметре шаблона
// Значение параметра по умолчанию
#include <iostream>
#include <cstdlib>
using namespace std;
//Обобщенный класс:
template <class X,class Y,int n=5> class MyClass{
public:
//Поля класса – массивы:
X xarray[n];
Y yarray[n];
//Конструктор класса:
MyClass(){
//Инициализация генератора случайных чисел:
srand(1);
//Заполнение массивов случайными значениями:
for(int i=0;i<n;i++){
   xarray[i]=(X)(100+rand()%10);
   yarray[i]=(Y)(100+rand()%10);}
}
//Методы для отображения массивов:
void getx(){
for(int i=0;i<n;i++) cout<<xarray[i]<<" ";
cout<<endl;}
void gety(){
for(int i=0;i<n;i++) cout<<yarray[i]<<" ";
cout<<endl;}
};
int main(){
//Размеры массивов-полей класса:
const int n=3;
//Создание объектов:
MyClass<int,char,n> a;
MyClass<char,double> b;
MyClass<char, char, 4> c;
//Проверка значений полей объектов:
a.getx();
a.gety();
b.getx();
b.gety();
c.getx();
c.gety();
return 0;}