/*
Пример класса для работы с квадратными матрицами.
Определены операторы сложения и умножения матриц.
*/
#include <iostream>
using namespace std;
//Размер квадратной матрицы:
const int n=3;
//Класс для реализации матриц:
class Matrix{
private:
//Поле - двумерный массив:
int matr[n][n];
public:
//Перегрузка оператора []:
int *operator[](int k){
return matr[k%3];}
//Перегрузка оператора сложения +:
Matrix operator+(Matrix obj){
Matrix tmp(0);
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      tmp[i][j]=matr[i][j]+obj[i][j];
return tmp;}
//Перегрузка оператора умножения *:
Matrix operator*(Matrix obj){
Matrix tmp(0);
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      for(int k=0;k<n;k++)
         tmp[i][j]+=matr[i][k]*obj[k][j];
return tmp;}
//Метод для отображения значений матрицы:
void show(){
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
      printf("%3d",matr[i][j]);
   }
   cout<<endl;
}
}
//Конструктор с аргументом:
Matrix(int k){
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      matr[i][j]=k;
}
//Конструктор без аргументов:
Matrix(){
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
      matr[i][j]=rand()%5-2;
}
};
int main(){
//Создание объектов:
Matrix A,B,C(0),D(0);
cout<<"Matrix A:\n";
A.show();
cout<<"Matrix B:\n";
B.show();
//Сумма матриц:
cout<<"Matrix C=A+B:\n";
C=A+B;
C.show();
//Произведение матриц:
cout<<"Matrix D=A*B:\n";
D=A*B;
D.show();
cout << "Matrix D[1][1]= " << D[1][1] << endl;
D[4][1] = 1;
cout << "Matrix D after the change:" << endl;
D.show();
return 0;}