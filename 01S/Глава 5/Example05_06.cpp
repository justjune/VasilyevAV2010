// ������� ��������� ����� ������
#include <iostream>
#include <cstdio>
using namespace std;
//������� ��� ���������� ����� ������:
int length(char *str){
int i=0;
while(str[i]){
   i++;
}
return i;
}
//�������� ������ ������� length():
int main(){
char str[80];
cout<<"Enter a string: ";
gets_s(str,80);
cout<<"String length is "<<length(str)<<endl;
cin.get();
return 0;
}