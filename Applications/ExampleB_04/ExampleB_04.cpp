// Общий перехват исключений
#include <iostream>
using namespace std;
int main() {
	int a, b;
	double x, y;
	char c = '\0';
	try {
		cout << "Enter a = ";
		cin >> a;
		cout << "Enter b = ";
		cin >> b;
		if (b == 0) throw b; // Подача целого исключения
		x = (double)a / b;
		y = x - a / b;
		if (y == 0) throw y; // Подача исключения с плавающей точкой
		cout << " a/b  = " << x << endl;
		cout << "[a/b] = " << a / b << endl;
		cout << "{a/b} = " << y << endl;
		throw c; // Подача символьного исключения
	}
	catch (int e) { // Прием целого исключения
		cout << "Division by " << e << " (zero)!\n";
	}
	catch (...) { // Прием всех оставшихся исключений
		cout << "Anything else\n";
	}
	return 0;
}