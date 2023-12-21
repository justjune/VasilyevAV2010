// передача массива, как указателя
#include <iostream>
using namespace std;
//Аргументом указано имя массива и размер:
void show(int *n,int m){
for(int i=0;i<m;i++)
   cout<<"n["<<i<<"]="<<n[i]<<endl;
}
int main(){
int n[5]={1,2,3,4,5};
show(n,5);
cout << "Part of the array!" << endl;
show(n+1,3);
return 0;
}