// Передача массива с указанием размера
#include <iostream>
using namespace std;
//При объявлении массива явно указан размер:
void show(int n[5]){
for(int i=0;i<6;i++)
   cout<<"n["<<i<<"]="<<n[i]<<endl;
}
int main(){
int n[6]={1,2,3,4,5,6}; // смысла в записи размера нет
show(n);
return 0;
}