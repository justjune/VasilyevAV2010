// Работа с двумерным символьным массивом
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
const int n=3;
int i;
char s[n][50];
for(i=0;i<n;i++){
   cout<<"Enter a string: ";
   gets_s(s[i],50);
}
for(i=0;i<n;i++)
   cout<<s[i]<<endl;
cin.get();
return 0;
}