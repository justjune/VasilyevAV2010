// Инициализация многомерного символьного массива
#include <iostream>
using namespace std;
int main(){
char s[3][100]={"Hello!","My name is Alex.","What is your name?"};
for(int i=0;i<3;i++) cout<<s[i]<<endl;
cin.get();
return 0;
}