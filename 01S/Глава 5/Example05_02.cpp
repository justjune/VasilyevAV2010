// ������ ���������� ������ gets_s()
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
char str[100];
cout<<"Enter your text, please: ";
//��� ���������� ������ ������������ ������� gets():
gets_s(str,100);
cout<<"Your text is: "<<str<<endl;
return 0;
}