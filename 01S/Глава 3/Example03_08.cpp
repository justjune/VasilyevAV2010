// Заполнение двумерного массива случайными числами
#include<iostream>
#include<ctime>
using namespace std;
int main(){
int n[4][5];
time_t start;
time(&start);
srand((int)start);
for(int i=0;i<4;i++){
   for(int j=0;j<5;j++){
      n[i][j]=rand() % 10;
      cout<<n[i][j]<<" ";}
   cout<<"\n";
}
return 0;
}