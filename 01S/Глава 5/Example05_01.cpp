// Пример ввода строки не более 100 символов и вывода ее
#include <iostream>
using namespace std;
int main(){
char str[100];
cout<<"Enter your text, please: ";
cin>>str;
cout<<"Your text is: "<<str<<endl;
return 0;
}