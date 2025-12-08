// Базовый синтаксис создаия и обработки исключительной ситуации:
// "поле", "подача", "прием".
#include <iostream>
using namespace std;
int main(){
int a,b;
try{ // начало поля
   cout<<"Enter a = ";
   cin>>a;
   cout<<"Enter b = ";
   cin>>b;
   if(b==0) throw b; // подача исключения
   cout<<"a/b = "<<(double)a/b<<endl;
} // конец поля
catch(int e){ // прием исключения
   cout<<"Division by "<< e << "!\n";
}
return 0;}