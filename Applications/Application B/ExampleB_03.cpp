// Генерация исключений различных типов
#include <iostream>
using namespace std;
int main(){
int a,b;
double x,y;
try{
   cout<<"Enter a = ";
   cin>>a;
   cout<<"Enter b = ";
   cin>>b;
   if(b==0) throw b; // Подача целого исключения
   x=(double)a/b;
   y=x-a/b;
   if(y==0) throw y; // Подача исключения с плавающей точкой
   cout<<" a/b  = "<<x<<endl;
   cout<<"[a/b] = "<<a/b<<endl;
   cout<<"{a/b} = "<<y<<endl;
}
catch(int e){ // Прием целого исключения
   cout<<"Division by "<<e<<" (zero)!\n";}
catch(double e){ // Прием вещественного исключения (в случае деления без остатка)
   cout<<"a/b is integer! Rest is "<<e<<" (zero)!\n";}
return 0;}