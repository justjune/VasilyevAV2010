// Stream operations with char

#include<fstream>
using namespace std;
int main()
{
	ifstream fin("..\\Example00_03\\Text.txt");
	ofstream fout("..\\Example00_03\\TextOut.txt");

	char c;
	while (!fin.eof()) {
		fin >> c;
		fout << c;
	}
	
	fout << endl << endl << "Written by << char";
	
	fin.close();
	fout.close();
	return 0;
}