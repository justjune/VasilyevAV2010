// Работа со строковыми литералами
#include <iostream>
using namespace std;
int main(){
char *p,*q;
p=(char*)"Hello, World!";
q=(char*)"Hello, World!"+7;
cout<<p<<endl;
cout<<q<<endl;
cout<<*p<<endl;
p++;
cout<<*p<<endl;
cin.get();
return 0;
}