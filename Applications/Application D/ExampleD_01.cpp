// Стандартная библиотека: Потоки для работы с файлами
#include <iostream>
//Заголовок для потоков файлового ввода-вывода:
#include <fstream>
using namespace std;
int main(){
//Символьный массив для считывания слов:
char word[30];
//Индексная переменная:
int i=1;
//Поток вывода в файл mydata.txt:
ofstream out("mydata.txt");
//Проверка открытия файла:
if(!out) {cout<<"File mydata.txt is not opened.\n";
          return 1;}
//Запись данных в файл mydata.txt:
else {out<<"This file contains simple text";
//Закрытие файла для записи:
      out.close();}
//Поток вывода в файл newdata.txt:
ofstream outMore;
outMore.open("newdata.txt");
//Проверка открытия файла newdata.txt:
if(!outMore) {cout<<"File newdata.txt is not opened.\n";
              return 1;}
//Поток вывода из файла mydata.txt:
ifstream in;
//Проверка открытия файла mydata.txt:
in.open("mydata.txt");
if(!in) {cout<<"File mydata.txt is not opened.\n";
         return 1;}
//Считывание из файла mydata.txt и запись в файл newdata.txt:
while(!in.eof()){
   in>>word;
   cout << "in pos = " << in.tellg() << endl;
   outMore<<word<<" - "<<i<<endl;
   cout << "outMore pos = " << outMore.tellp() << endl;
   i++;}
in.clear(); // очистка состояния выхода за пределы файла при чтении
in.seekg(5); // установка позиции чтения на 5 символ
in >> word; // чтение с 5 символа
cout << "pos 6 out: " << word << endl; // вывод прочтенного слова
//Закрытие файла mydata.txt:
in.close();
//Закрытие файла newdata.txt:
outMore.close();
return 0;}