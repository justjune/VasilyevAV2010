// Наследование частного члена
#include <iostream>
using namespace std;
//Базовый класс:
class A{
protected:
int x;
public:
int y;
void set(int i){x=i;}
};
//Производный класс:
class B: public A{
public:
int z;
void show(){
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
cout<<"z = "<<z<<endl;}
};
int main(){
B obj;
obj.set(0); // Инициализация частного члена, унаследованного публичным образом
obj.y=1;	// Инициализация публичного члена, унаследованного публичным образом
obj.z=2;	// Инициализация собственного публичного члена
obj.show();
return 0;}