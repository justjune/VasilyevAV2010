// Использование указателей
#include <iostream>
using namespace std;
int main(){
int *q,n,*p;
n=100;
p=&n; // 1ый псевдоним
q=p; // 2ой псевдоним
(*p)++; // значения в области памяти увеличены
cout<<*q<<"\n";
cout<<n<<"\n";
cout<<p<<"\n"; // печать значения указателя
return 0;
}