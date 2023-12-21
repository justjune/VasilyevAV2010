// Вызов конструкторов базового класса при многократном наследовании 
#include <iostream>
using namespace std;
class Base1{ // базовый класс с конструктором - 1 параметр и деструктором
public:
int l;
Base1(int i){
cout<<"Base1-object created!\n";
l=i;
cout<<"l = "<<l<<endl;}
~Base1(){
cout<<"Base1-object deleted!\n";}
};


class Base2{ // еще один базовый класс с конструктором - 1 параметр и деструктором
public:
int n;
Base2(int i){
cout<<"Base2-object created!\n";
n=i;
cout<<"n = "<<n<<endl;}
~Base2(){
cout<<"Base2-object deleted!\n";}
};


class Derivative:public Base1,public Base2{ // производный класс наследует от обоих
public:
int m; // добавочное поле производного класса
Derivative(int i,int j,int k):Base1(i),Base2(j){ // вызов конструкторов базвых классов 
cout<<"Derivative-object created!\n";
m=k;
cout<<"m = "<<m<<endl;}
~Derivative(){
cout<<"Derivative-object deleted:\n";
cout<<"l = "<<l<<endl;
cout<<"n = "<<n<<endl;
cout<<"m = "<<m<<endl;}
};
int main(){
Derivative obj2(1,2,3);
return 0;}