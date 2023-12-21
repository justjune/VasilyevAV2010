//Пример публичного наследования
#include <iostream>
using namespace std;
//Базовый класс:
class A{
private:
int x;
public:
int y;
};
//Производный класс:
class B: public A{
public:
int z;
void show(){
cout<<"y = "<<y<<endl;
cout<<"z = "<<z<<endl;}
};
int main(){
B obj;
obj.y=1; // Унаследованный член
obj.z=2; // Собственный член
obj.show();
return 0;}