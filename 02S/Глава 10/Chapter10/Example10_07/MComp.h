#pragma once
//Класс для реализации комплексных чисел:
class MComp {
public:
	double Re;
	double Im;
};
//Операторная функция для сложения двух объектов:
MComp operator+(MComp x, MComp y);
//Операторная функция для вычитания двух объектов:
MComp operator-(MComp x, MComp y);
//Операторная функция для сложения числа и объекта:
MComp operator+(double x, MComp y);
//Операторная функция для сложения объекта и числа:
MComp operator+(MComp y, double x);
//Операторная функция для вычитания из числа объекта:
MComp operator-(double x, MComp y);
//Операторная функция для вычитания из объекта числа:
MComp operator-(MComp y, double x); 
//Операторная функция для префиксной формы инкремента :
MComp operator++(MComp &x);
//Операторная функция для постфиксной формы инкремента:
MComp operator++(MComp &x, int unused);
//Операторная функция для префиксной формы декремента:
MComp operator--(MComp &x);
//Операторная функция для постфиксной формы декремента:
MComp operator--(MComp &x, int unused);
//Операторная функция для вычисления комплексно-спряженного:
MComp operator!(MComp &x);