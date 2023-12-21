#include"MComp.h"

//Операторная функция для сложения двух объектов:
MComp operator+(MComp x, MComp y) {
	MComp z;
	z.Re = x.Re + y.Re;
	z.Im = x.Im + y.Im;
	return z;
}
//Операторная функция для вычитания двух объектов:
MComp operator-(MComp x, MComp y) {
	MComp z;
	z.Re = x.Re - y.Re;
	z.Im = x.Im - y.Im;
	return z;
}
//Операторная функция для сложения числа и объекта:
MComp operator+(double x, MComp y) {
	MComp z;
	z.Re = x + y.Re;
	z.Im = y.Im;
	return z;
}
//Операторная функция для сложения объекта и числа:
MComp operator+(MComp y, double x) {
	MComp z;
	z.Re = x + y.Re;
	z.Im = y.Im;
	return z;
}
//Операторная функция для вычитания из числа объекта:
MComp operator-(double x, MComp y) {
	MComp z;
	z.Re = x - y.Re;
	z.Im = -y.Im;
	return z;
}
//Операторная функция для вычитания из объекта числа:
MComp operator-(MComp y, double x) {
	MComp z;
	z.Re = y.Re - x;
	z.Im = y.Im;
	return z;
}
//Операторная функция для префиксной формы инкремента:
MComp operator++(MComp &x) {
	x.Re++;
	return x;
}
//Операторная функция для постфиксной формы инкремента:
MComp operator++(MComp &x, int unused) {
	x.Im++;
	return x;
}
//Операторная функция для префиксной формы декремента:
MComp operator--(MComp &x) {
	x.Re--;
	return x;
}
//Операторная функция для постфиксной формы декремента:
MComp operator--(MComp &x, int unused) {
	x.Im--;
	return x;
}
//Операторная функция для вычисления комплексно-спряженного:
MComp operator!(MComp &x) {
	x.Im *= -1;
	return x;
}