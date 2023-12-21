// аргументы главной функции, параметры командной строки
// вводить в консоли или в Проект/Свойства/Свойства кфг/Отладка
#include <iostream>
using namespace std;
int main(int size,char *str[]){
int i;
for(i=0;i<size;i++)
   cout<<i+1<<"-th argument is: "<<str[i]<<endl;
return 0;
}