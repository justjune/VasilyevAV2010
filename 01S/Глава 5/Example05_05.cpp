// Использование нуль-символа, как окончания строки
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
char str[20];
cout<<"Enter a string: ";
gets_s(str,20);
for(int i=0;str[i];i++)
   cout<<str[i];
cout<<endl;

return 0;
}