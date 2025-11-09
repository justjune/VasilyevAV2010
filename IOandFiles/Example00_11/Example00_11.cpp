// Демонстрация бинарных файлов for structure type

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	struct x
	{
		int i;
		char a;
		char s[10];
	}data;

	fstream f;

	f.open("Struct.bin", ios::out|ios::binary);

	const int alpha = int('A');
	if (f.good()) {
		for (int i = 0;i < 3;++i) {
			data.i = rand() % 5 + 4;
			data.a = char(alpha + rand() % 26);
			for (int j = 0;j < data.i;++j)
				data.s[j] = tolower(char(alpha + rand() % 26));
			data.s[data.i] = '\0';
			f.write((char*)&data, sizeof x);
		}
	}
	cout << "Sizeof data = sizeof (int): " << sizeof (int) 
		<< " + sizeof (char): " << sizeof(char)
		<< " + sizeof data.s: " << sizeof data.s
		<< " = "<< sizeof x << endl << endl;
	f.close();
	
	f.open("Struct.bin", ios::in | ios::binary);
	if (f.good()) {
		for (int i = 0;i < 3;++i) {
			f.seekg((rand() % 3) * sizeof x, ios::beg);
			cout << f.tellg() << endl;
			f.read((char*)&data, sizeof x);
			cout << data.i << endl;
			cout << data.a << endl;
			cout << data.s << endl;
			cout << endl;
		}
	}
	f.close();

	return 0;
}