//fstream attributes usage

#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	
	fin.open("..\\Example00_03\\Text.txt", ios::in);
	fout.open("..\\Example00_03\\TextOut.txt", ios::_Nocreate|ios::app);
/*
List of Attributes

ios::in         open file for reading
ios::out        open file for writing
ios::app        open for writing,add to end of file(append).
ios::binary     Binary file
ios::nocreate   do not create the file,open only if it exists
ios::noreplace  open and create a new file if the specified file does not exist
ios::trunc      open a file and empty it.(Boom, all the data is gone,if any)
ios::ate        goes to end of file instead of the begining
*/
	char c[128];
	while (!fin.eof()) {
		fin.getline(c, sizeof c);
		fout << c << endl;
	}

	fout << endl << endl << "Written by getline | << char *";

	fin.close();
	fout.close();
	return 0;
}