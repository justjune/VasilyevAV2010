// Простейшее перекрытие стандартных входного и выходного файловых потоков

#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream cin("..\\Example00_03\\Text.txt");
	ofstream cout("..\\Example00_03\\TextOut.txt");
	string s;
	while (true) {
		cin >> s;
		if (s == "q") break;
		cout << s.c_str() << endl;
	}
	cin.close();
	cout.close();
	return 0;
}