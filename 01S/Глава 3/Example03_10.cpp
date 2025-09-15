// Использование символьного массива
#include <iostream>
using namespace std;
int main(){
char str1[20]="hello";
char str2[20]={'h','e','l','l','o','\0'};
cout<<str1<<"\n";
for (char *p = str1; p < str1 + 20;p++)
	cout << int(*p);
cout << endl;
cout<<str2<<"\n";
for (char *p = str2; p < str2 + 20;p++)
	cout << (int)*p;
cout << endl;
return 0;
}