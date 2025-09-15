// Функции для работы со строками и символами
#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;
int main(){
int n;
double x;
char str1[20];
char str2[20];
cout<<"Enter a int-string: ";
gets_s(str1,20);
n=atoi(str1)/2;
cout<<"n= "<<n<<endl;
cout<<"Enter a double-string: ";
gets_s(str2,20);
x=atof(str2)+2;
cout<<"x= "<<x<<endl;
return 0;
}