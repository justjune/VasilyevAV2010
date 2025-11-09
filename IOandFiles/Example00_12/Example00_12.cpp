// Препроцессор
#include <iostream>
#include<locale>
using namespace std;

#include"MyHeader.h"

int main() {

	#ifdef DEBUG
		cerr << "Trace: Inside main function" << endl;
	#endif

	cout << "Value of PI :" << PI << endl;
	cout << "SQR(PI) :" << SQR(PI) << endl;
	cout << "SQ(1+2) :" << SQ(1 + 2) << endl;
	cout << MKSTR(HELLO C++) << endl;
	int xy = 100;
	cout << CONCAT(x, y) << endl;
	setlocale(LC_ALL, "ru-RU");
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	cout << "Value of __TIME__ : " << __TIME__ << endl;

	#ifdef DEBUG
		cerr << "Trace: Coming out of main function" << endl;
	#endif
	return 0;
}