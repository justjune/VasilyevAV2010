// Пример создания статического массива и заплонения его случайными целыми числами из диапазона от  0 до RAND_MAX (32767). 
#include<iostream>
#include<ctime>
using namespace std;
int main(){
int n[10];
time_t start=1;
time(&start);
srand((int)start);
for(int i=0;i<10;i++){
   n[i]=rand() % 10;
   cout<<n[i]<<" ";}
cout<<"\n";
return 0;
}