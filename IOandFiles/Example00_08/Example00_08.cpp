//Get and put demonstration for copying a file

#include<fstream>
using namespace std;
int main()
{
	ifstream fin("..\\Example00_03\\Text.txt");
	ofstream fout("..\\Example00_03\\TextOut.txt");

	char c;
	while (!fin.eof()) {
		fin.get(c);
		fout.put(c);
	}

	fout << endl << endl << "Written by << get | put char";

	fin.close();
	fout.close();
	return 0;
}