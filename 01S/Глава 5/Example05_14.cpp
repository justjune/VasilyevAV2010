// ƒинамическое объ€вление массивов
#include <iostream>
using namespace std;
int main(){
int *p,n;
cout<<"Enter n = ";
cin>>n;
p=new int[n];
for(int i=0;i<n;i++){
   p[i]=2*i+1;
   cout<<p[i]<<" ";
}
delete [] p;
cout<<endl;
cin.get();
cin.get();
return 0;
}