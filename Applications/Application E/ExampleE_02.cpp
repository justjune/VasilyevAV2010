// Способы обращения к пространствам имен
#include <iostream>
using namespace std;
//Пространство имен myOun:
namespace myOun{
   int n=10;
   class MyClass{
   public:
   double x;
   MyClass(){
   x=n+1.5;}};
}
int main(){
int n=5;
//Открытие пространства имен myOun:
using namespace myOun; // Способ 1
//Ссылка на класс из пространства имен myOun:
MyClass obj;
cout<<"obj.x = "<<obj.x<<endl;
cout<<"n = "<<n<<endl;
//ССылка на переменную из пространства имен myOun: // Способ 2
cout<<"myOun::n = "<<myOun::n<<endl;
return 0;}