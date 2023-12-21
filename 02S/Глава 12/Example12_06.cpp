// Обобщенный класс
#include <iostream>
using namespace std;
//Обобщенный класс - плохой пример перегрузки операторов!:
template <class X> class MyClass{
X value;
public:
MyClass(X m){
value=m;}
void operator()(X m){value=m;}
void operator>>(bool lf){
if (lf)
	cout<<"value = "<<value<<endl;
else
	cout << "value = " << value << ", ";
}
};
int main(){
//Создание объекта с int-полем:
MyClass<int> a(5);
a>>false;
a(3);
a>>true;
//Создание объекта с char-полем:
MyClass<char> b('x');
b>>false;
b('z');
b>>true;
return 0;}