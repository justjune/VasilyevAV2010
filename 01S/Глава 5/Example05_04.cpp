// Сравнение способов заполнения строк
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
int i;
const int n=20;
char str[20];
for(i=0;i<n;i++){
   str[i]='A'+i;
   cout<<str[i];
}
cout<<endl;
cout<<"Enter a string: ";
gets_s(str,20);
cout<<str<<endl;
for(i=0;i<n;i++)
cout<<str[i];
cout<<endl;
cin.get();
return 0;
}