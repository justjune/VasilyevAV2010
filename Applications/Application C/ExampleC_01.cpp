// Стандартная бибилотека: строки С++
#include <iostream>
//Заголовок для включения класса string в программу:
#include <string>
using namespace std;
int main(){
//Символьная строка:
char str[30]="Alex";
//Пустая строка – объект класса string:
string s1;
//Строка с явно указанным значением:
string s2("What is your name?");
//Строка создана на основе символьного массива:
string s3(str);
//Вывод строки на экран:
cout<<s2<<endl;
//Считывание строки с консоли:
cin>>s1;
//Сравнение и объединение строк:
if(s1==s3) cout<<"Hello, "+s3<<endl;
else cout<<"You are not "+s3+"!"<<endl;
// Перемена строк местами:
cout << "Before swapping string s1 and s2:" << endl;
cout << "The basic_string s1 = " << s1 << "." << endl;
cout << "The basic_string s2 = " << s2 << "." << endl;

swap(s1, s2);
cout << "\nAfter swapping string s1 and s2:" << endl;
cout << "The basic_string s1 = " << s1 << "." << endl;
cout << "The basic_string s2 = " << s2 << "." << endl;

// Преобразования строки символов в другие типы
string ss="1";
cout << "double " << stod(ss) << endl;
cout << "int " << stoi(ss) << endl;
cout << "string " + to_string(1.7) << endl;
return 0;}