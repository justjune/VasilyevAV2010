// Копирование строк, преобразование к прописным и соединение строк
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
char s1[20],s2[20];
setlocale(LC_ALL,"ru-RU");
strcpy_s(s1,20,Меня зовут ");
strcpy_s(s2,20,"Алексей");
for(int i=0;s2[i];s2[i]=toupper(s2[i]),i++);
strcat_s(s1,20,s2);
cout<<s1<<endl;
cin.get();
return 0;
}