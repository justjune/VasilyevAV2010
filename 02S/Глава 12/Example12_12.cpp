// Пример:
// Массив с перегруженным инкрементом для циклической перестановки массива
// оператор доступа к элементам [] тоже переопределен

#include <iostream>
using namespace std;
//Размер поля-массива:

template <class X, const int n = 10> class MyClass{
public:
//Поле-массив:
X array[n];
//Перегрузка оператора []:
X operator[](int k){
return array[k%n];} // При таком определении что то положить в массив не удастся!
//Перегрузка оператора ++:
MyClass operator++(){
int i;
X tmp=array[n-1]; // сохранми последний элемент
for(i=n-1;i>0;i--)
   array[i]=array[i-1]; // сдвинем все предыдущие на позицию вправо
array[0]=tmp;
return *this;} // возвращаем сам измененый объект
//Метод для отображения массива:
void show(){
for(int i=0;i<n;i++)
   cout<<array[i]<<" ";
cout<<endl;}
//Конструктор класса:
MyClass(){
for(int i=0;i<n;i++)
   array[i]=(X)(rand()%25+100); //Что тут делают скобки вокруг типа?
}
};
int main(){
MyClass<int> obj1;
obj1.show();
for(int i=1000;i<1020;i++) // Все равно выведет диапазон!
   cout<<obj1[i]<<" ";
cout<<endl;
MyClass<char> obj2;
obj2.show();
++obj2;
obj2.show();
return 0;}