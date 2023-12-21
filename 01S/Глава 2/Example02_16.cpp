// Пример вычисления синуса, как "предела" последовательности
#include <iostream>
#include <cmath>
using namespace std;
//Граница ряда:
const int N=100;
int main(){
//Аргумент функции и "рабочие" переменные:
double x,q,s=0;
//Индексная переменная:
int n;
cout<<"Enter x = ";
cin>>x;
q=x;
//Вычисление синуса:
for(n=1;n<=N;n++){
   s+=q;
   q*=(-1)*x*x/(2*n)/(2*n+1);
}
//Результат:
cout<<"Calculated sin("<<x<<") = "<<s<<endl;
cout << "Library sin(" << x << ") = " << sin(x) << endl;
return 0;
}