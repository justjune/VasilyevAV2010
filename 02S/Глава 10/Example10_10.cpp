/*
Пример определения и использования
класса комплексного числа с оператором
присваивания, определенными внутри класса
с демонстрацией внешней компоновки
*/
#include<iostream>
using namespace std;
//Описание класса:
class MComp{
public:
double Re;
double Im;
//Переопределение оператора присваивания 
// (всегда только внутренняя функция класса!):
MComp operator=(MComp x){
Re=x.Re+1;
Im=x.Im-1;
return *this;}
};

int main(){
MComp a,b;
a.Re=1;
a.Im=2;
cout << a.Re << " +i " << a.Im << endl;

//Присваивание объектов:
b=a;
cout<<"b.Re = "<<b.Re<<"\n";
cout<<"b.Im = "<<b.Im<<"\n";
return 0;
}