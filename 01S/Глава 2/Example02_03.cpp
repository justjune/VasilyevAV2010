// Программа выбора из 1, 2, 3 или чеще чего нибудь
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n=";
cin>>n;
switch(n){
case 1:
   cout<<"First case-block\n";
   break;
case 2:
   cout<<"Second case-block\n";
   break;
case 3:
   cout<<"Third case-block\n";
   break;
default:
   cout<<"By default\n";
}
return 0;
}