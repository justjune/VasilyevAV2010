// Разумная практика передачи массива, как аргумента
#include <iostream>
using namespace std;
//При объявлении массива размер не указан:
void show(int n[], int m){
for(int i=0;i<m;i++)
   cout<<"n["<<i<<"]="<<n[i]<<endl;
}
int main(){
int n[5]={1,2,3,4,5};
show(n, 5);
return 0;
}