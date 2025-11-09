// Простейшее создание входного и выходного файловых потоков

#include<fstream>
using namespace std;
int main()
{
	ifstream fin("..\\Example00_03\\Text.txt");
	ofstream fout("..\\Example00_03\\TextOut.txt");

	char s[128];
	while (!fin.eof()) {
		fin >> s;
		fout << s << endl;
	}

	fout << endl << endl << "Written by << char*";

	fin.close();
	fout.close();
	return 0;
}