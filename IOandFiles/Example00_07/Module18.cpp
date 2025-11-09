/*
============================MODULE18=======================================
|                                                                         |
|  The program examples' source codes have been arranged in the same      |
|  order that appeared in the Tutorial. This is unedited and unverified   |
|  compilation. Published as is basis for educational, reacretional and   |
|  brain teaser purposes. All trademarks, copyrights and IPs, wherever    |
|  exist, are the sole property of their respective owner and/or          |
|  holder. Any damage or loss by using the materials presented in this    |
|  tutorial is USER responsibility. Part or full distribution,            |
|  reproduction and modification is granted to any body.                  |
|     Copyright 2003-2005 © Tenouk, Inc. All rights reserved.			  |
|          Distributed through http://www.tenouk.com					  |
|        																  |
|																		  |
===========================================================================
Originally programs compiled using Borland C++. Examples compiled using
VC++/VC++ .Net and gcc or g++ are given at the end of every Module.
For example if you want to compile C++ codes using VC++/VC++ .Net, change
the header file accordingly.  Just need some modification for the header
files...:
*/
//-------------------------------------------------
//#include <iostream.h>
//for system()
//#include <stdlib.h>

/*...
{
C++ codes...
}
-------------------------------------------------
should be changed to:
-------------------------------------------------
*/
//#include <iostream>
//use C++ wrapper to call C functions from C++ programs...
//#include <cstdlib>
//using namespace std;

/*...
{
C++ codes...
}
-------------------------------------------------
In VC++/VC++ .Net the iostream.h (header with .h) is not valid anymore.
It should be C++ header, <iostream> so that it comply to the standard.
In older Borland C++ compiler this still works, but not proper any more...
and for standard C/C++ the portability should be no problem or better
you read Module23 at http://www.tenouk.com/Module23.html to get
the big picture...For C codes, they still C codes :o)
=========================================================================
=========================================================================
*/
//string output using <<.  For VC++/VC++ .Net change the
//header files accordingly...
//#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

/*
#include <stdlib.h>
#include <iostream.h>
*/

void first(void)
{
cout<<"Welcome to C++ I/O module!!!"<<endl;
cout<<"Welcome to ";
cout<<"C++ module 18"<<endl;  
//endl is end line stream manipulator
//issue a new line character and flushes the output buffer
//output buffer may be flushed by cout<<flush; command

system("pause");
}

//------------------------------------------------------------------------

//concatenating <<
//#include <stdlib.h>	
//for system(), if compiled in some compiler
//such as Visual Studio, no need this stdlib.h
// #include <iostream.h>

void second(void)
{
int p = 3, q = 10;

cout << "Concatenating using << operator.\n"
     <<"--------------------------------"<<endl;
cout << "70 minus 20 is "<<(70 - 20)<<endl;
cout << "55 plus 4 is "<<(55 + 4)<<endl;
cout <<p<<" + "<<q<<" = "<<(p+q)<<endl;

system("pause");
}

//-----------------------------------------------------------------------

//#include <stdlib.h>
//#include <iostream.h>

void third(void)
{
int p, q, r;

cout << "Enter 3 integers separated by space: \n";
cin>>p>>q>>r;
//the >> operator skips whitespace characters such as tabs,
//blank space and newlines.  When eof is encountered, zero (false)
//is returned.
cout<<"Sum of the "<<p<<","<<q<<" and "<<r<<" is = "<<(p+q+r)<<endl;

system("pause");
}

//----------------------------------------------------------------------

//End of file controls depend on system
//Ctrl-z followed by return key - IBM PC
//Ctrl-d - UNIX and MAC

//#include <stdlib.h>
//#include <iostream.h>

void forth(void)
{
char p;

cout <<"Using member functions get(), eof() and put()\n"
     <<"---------------------------------------------"<<endl;
cout<<"Before any input, cin.eof() is "<<cin.eof()<<endl;
cout<<"Enter a line of texts followed by end of file control: "<<endl;

while((p = cin.get()) !=EOF)
cout.put(p);
cout<<"\nAfter some text input, cin.eof() is "<<cin.eof()<<endl;

system("pause");
}

//-----------------------------------------------------------------------

//Another get() version
//#include <stdlib.h>
//#include <iostream.h>

const int SIZE = 100;

void fifth(void)
{
	cin.clear();
char bufferOne[SIZE], bufferTwo[SIZE];

cout <<"Enter a line of text:"<<endl;
cin>>bufferOne;
//store the string in array bufferOne
//just the first word in the array string, then the
//first whitespace encountered
cout<<"\nThe line of text read by cin>> was:"<<endl;
cout<<bufferOne<<endl;
cin.get(bufferTwo, SIZE);
//the rest of the string
cout<<"The line of text read by cin.get(bufferTwo,SIZE) was:"<<endl;

cout<<bufferTwo<<endl;
system("pause");
}

//---------------------------------------------------------------------------

//getline() example
//#include <stdlib.h>
//#include <iostream.h>

//const int SIZE = 100;

void sixth(void)
{
char buffer[SIZE];
cin.clear();
cout<<"Read by cin.getline(buffer, SIZE)\n"
    <<"--------------------------------\n"
    <<"Enter a line of text:"<<endl;
cin.getline(buffer, SIZE);
cout<<"The line of text entered is: "<<endl;

cout<<buffer<<endl;
system("pause");
}

//--------------------------------------------------------------------------

//Using read(), write() and gcount() member functions
//#include <stdlib.h>
//#include <iostream.h>

//const int SIZE = 100;

void seventh(void)
{
char buffer[SIZE];
cin.clear();
cout<<"Enter a line of text:"<<endl;
cin.read(buffer,45);
cout<<"The line of text entered was: "<<endl;
int i = 0;
cout.write(buffer, i= cin.gcount());
cout << endl << "cin.gcount(): " << i << endl;
//The gcount() member function returns 
//the number of unformatted characters last extracted
cout<<endl;

system("pause");
}

//--------------------------------------------------------------------------

//using hex, oct, dec and setbase stream manipulator
//#include <stdlib.h>
//#include <iostream.h>
//#include <iomanip.h>

void eighth(void)
{
	cin.clear();
int p;

cout<<"Enter a decimal number:"<<endl;
cin>>p;
cout<<p<< " in hexadecimal is: "
<<hex<<p<<'\n'
<<dec<<p<<" in octal is: "
<<oct<<p<<'\n'
<<setbase(10) <<p<<" in decimal is: "
<<p<<endl;
cout<<endl;

system("pause");
cin.clear();
}

//--------------------------------------------------------------------------

//using precision and setprecision
//#include <stdlib.h>
//#include <iostream.h>
//#include <iomanip.h>
#include <cmath>
#include<iomanip>
void nineth(void)
{
double theroot = sqrt(11.55);

cout<<"Square root of 11.55 with various"<<endl; 
cout<<"           precisions"<<endl;
cout<<"---------------------------------"<<endl;
cout<<"Using 'precision':"<<endl;

for(int poinplace=0; poinplace<=8; poinplace++)
{
cout.precision(poinplace);
cout<<theroot<<endl;
}
cout<<"\nUsing 'setprecision':"<<endl;

for(int poinplace=0; poinplace<=8; poinplace++)
cout<<setprecision(poinplace)<<theroot<<endl;

system("pause");
cin.clear();
}

//------------------------------------------------------------------------

//using width member function
//#include <iostream.h>
//#include <stdlib.h>

void tenth(void)
{
	int p = 6;
	char string[20];

	cout<<"Using field width with setw() or width()"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Enter a line of text:"<<endl;
	cin.width(7);
	while (cin>>string)
	{
		cout.width(p++);
		cout<<string<<endl;
		cin.width(7);
		//use ctrl-z followed by return key or ctrl-d to exit
	}

	system("pause");
	cin.clear();
}

//------------------------------------------------------------------------

///Using showpoint
//controlling the trailing zeroes and floating points
//#include <iostream.h>
//#include <iomanip.h>
//#include <stdlib.h>

void eleventh(void)
{
cout<<"Before using the ios::showpoint flag\n"
    <<"------------------------------------"<<endl;
cout<<"cout prints 88.88000 as: "<<88.88000
<<"\ncout prints 88.80000 as: "<<88.80000
<<"\ncout prints 88.00000 as: "<<88.00000
<<"\n\nAfter using the ios::showpoint flag\n"
<<"-----------------------------------"<<endl;
cout.setf(ios::showpoint);
cout<<"cout prints 88.88000 as: "<<88.88000
<<"\ncout prints 88.80000 as: "<<88.80000
<<"\ncout prints 88.00000 as: "<<88.00000<<endl;

system("pause");
cin.clear();
}

//--------------------------------------------------------------------------

//using setw(), setiosflags(), resetiosflags() manipulators
//and setf and unsetf member functions
//#include <iostream.h>
//#include <iomanip.h>
//#include <stdlib.h>

void tvelveth(void)
{
	long p = 123456789L;
	//L - literal data type qualifier for long...
	//F - float, UL unsigned integer...
	cout<<"The default for 10 fields is right justified:\n"
    	<<setw(10)<<p
    	<<"\n\nUsing member function\n"
    	<<"---------------------\n"
    	<<"\nUsing setf() to set ios::left:\n"<<setw(10);
	cout.setf(ios::left,ios::adjustfield);
	cout<<p<<"\nUsing unsetf() to restore the default:\n";
	cout.unsetf(ios::left);
	cout<<setw(10)<<p
    	<<"\n\nUsing parameterized stream manipulators\n"
    	<<"---------------------------------------\n"
    	<<"\nUse setiosflags() to set the ios::left:\n"
    	<<setw(10)<<setiosflags(ios::left)<<p
    	<<"\nUsing resetiosflags() to restore the default:\n"
    	<<setw(10)<<resetiosflags(ios::left)
    	<<p<<endl;

	system("pause");
	cin.clear();
}

//-------------------------------------------------------------------------

//using setw(), setiosflags(), showpos and internal
//#include <iostream.h>
//#include <iomanip.h>
//#include <stdlib.h>

void thirteenth(void)
{
	cout<<setiosflags(ios::internal | ios::showpos)
		<<setw(12)<<12345<<endl;
system("pause");
cin.clear();
}

//-------------------------------------------------------------------------

//using fill() member function and setfill() manipulator
//#include <iostream.h>
//#include <iomanip.h>
//#include <stdlib.h>

void fourteenth(void)
{

long p = 30000;

cout<<p
	<<" printed using the default pad character\n"
	<<"for right and left justified and as hex\n"
	<<"with internal justification.\n"
	<<"--------------------------------------------\n";
cout.setf(ios::showbase);
cout<<setw(10)<<p<<endl;
cout.setf(ios::left,ios::adjustfield);
cout<<setw(10)<<p<<endl;
cout.setf(ios::internal,ios::adjustfield);
cout<<setw(10)<<hex<<p<<"\n\n";

cout<<"Using various padding character"<<endl;
cout<<"-------------------------------"<<endl;
cout.setf(ios::right,ios::adjustfield);
cout.fill('#');
cout<<setw(10)<<dec<<p<<'\n';
cout.setf(ios::left,ios::adjustfield);
cout<<setw(10)<<setfill('$')<<p<<'\n';
cout.setf(ios::internal,ios::adjustfield);
cout<<setw(10)<<setfill('*')<<hex<<p<<endl;

system("pause");
cin.clear();
}

//-------------------------------------------------------------------------

//using ios::showbase
//#include <iostream.h>
//#include <iomanip.h>
//#include <stdlib.h>

void fifteenth(void)
{

long p = 2000;

cout<<setiosflags(ios::showbase)
    <<"Printing integers by their base:\n"
    <<"--------------------------------\n"
    <<"Decimal    ---> "<<p<<'\n'
    <<"Hexadecimal---> "<<hex<<p<<'\n'
    <<"Octal      ---> "<<oct<<p<<endl;

system("pause");
cin.clear();
}

//------------------------------------------------------------------------

//Displaying floating number in system
//default, scientific and fixed format

//#include <iostream.h>
//#include <stdlib.h>

void sixteenth(void)
{

double p = 0.000654321, q = 9.8765e3;

cout<<"Declared variables\n"
	<<"------------------\n"
	<<"0.000654321"<<'\n'<<"9.8765e3"<<"\n\n";

cout<<"Default format:\n"
	<<"---------------\n"
	<<p<<'\t'<<q<<'\n'<<endl;

cout.setf(ios::scientific,ios::floatfield);
cout<<"Scientific format:\n"
	<<"------------------\n"
	<<p<<'\t'<<q<<'\n';

cout.unsetf(ios::scientific);
cout<<"\nDefault format after unsetf:\n"
	<<"----------------------------\n"
	<<p<<'\t'<<q<<endl;
cout.setf(ios::fixed,ios::floatfield);
cout<<"\nIn fixed format:\n"
	<<"----------------\n"
	<<p<<'\t'<<q<<endl;

system("pause");
cin.clear();
}

//------------------------------------------------------------------------

//Using ios::uppercase flag
//#include <iostream.h>
//#include <iomanip.h>
//#include <stdlib.h>

void seventeenth(void)
{

long p = 12345678;

cout<<setiosflags(ios::uppercase)
	<<"Uppercase letters in scientific\n"
	<<"notation-exponents and hexadecimal values:\n"
	<<"------------------------------------------\n"
	<<5.7654e12<<'\n'
	<<hex<<p<<endl;

system("pause");
cin.clear();
}

//------------------------------------------------------------------------

//Demonstrating the flags() member function
//any format flags() not specified in the
//argument to flags() are reset.
//#include <iostream.h>
//#include <stdlib.h>

void eighteenth(void)
{

long p = 2000;
double q = 0.00124345;

//set a new format state
cout<<"The value of flags variable is: "
	<<cout.flags()<<'\n'
	<<"Print long int and double in original format:\n"
	<<p<<'\t'<<q<<"\n\n";

long OriginalFormat = cout.flags(ios::oct | ios::scientific);
//save the previous format state
cout<<"The value of the flags variable is: "
	<<cout.flags()<<'\n'
	<<"Print long int and double in a new format\n"
	<<"specified using the flags member function:\n"
	<<p<<'\t'<<q<<"\n\n";

cout.flags(OriginalFormat);
//restore the original format setting
cout<<"The value of the flags variable is: "
	<<cout.flags()<<'\n'
	<<"Print values in original format again:\n"
	<<p<<'\t'<<q<<endl;

system("pause");
cin.clear();
}

//------------------------------------------------------------------------

//Using eof(), fail(), bad(), good(), clear()
//and rdstate()
//#include <iostream.h>
//#include <stdlib.h>

void nineteenth(void)
{

int p;

cout<<"Before a bad input operation: \n"
	<<"-----------------------------\n"
	<<"  cin.rdstate(): "<<cin.rdstate()
	<<"\n      cin.eof(): "<<cin.eof()
	<<"\n     cin.fail(): "<<cin.fail()
	<<"\n      cin.bad(): "<<cin.bad()
	<<"\n     cin.good(): "<<cin.good()
	<<"\n\nEnter a character (should be integer): "<<endl;
cin>>p;

cout<<"After a bad input operation: \n"
	<<"----------------------------\n"
	<<"  cin.rdstate(): "<<cin.rdstate()
	<<"\n      cin.eof(): "<<cin.eof()
	<<"\n     cin.fail(): "<<cin.fail()
	<<"\n      cin.bad(): "<<cin.bad()
	<<"\n     cin.good(): "<<cin.good()<<"\n\n";
cin.clear();
cout<<"After cin.clear()\n"
	<<"-----------------\n"
	<<"cin.fail(): "<<cin.fail()<<endl;
system("pause");
cin.clear();
}

//-------------------------------------------------VC++/VC++ .Net----------------------------------------------------

//Displaying floating number in system
//default, scientific and fixed format
//#include <iostream>
//using namespace std;

void twenteeth(void)
{
double p = 0.000654321, q = 9.8765e3;

cout<<"Declared variables\n"
	<<"------------------\n"
	<<"0.000654321"<<'\n'<<"9.8765e3"<<"\n\n";

cout<<"Default format:\n"
	<<"---------------\n"
	<<p<<'\t'<<q<<'\n'<<endl;

cout.setf(ios::scientific,ios::floatfield);
cout<<"Scientific format:\n"
	<<"------------------\n"
	<<p<<'\t'<<q<<'\n';

cout.unsetf(ios::scientific);
cout<<"\nDefault format after unsetf:\n"
	<<"----------------------------\n"
	<<p<<'\t'<<q<<endl;
cout.setf(ios::fixed,ios::floatfield);
cout<<"\nIn fixed format:\n"
	<<"----------------\n"
	<<p<<'\t'<<q<<endl;
system("pause");
cin.clear();
}

//------------------------------------------------G++ on Linux/Fedora--------------------------------------------------

/////-padding.cpp-/////
//using fill() member function and setfill() manipulator
//#include <iostream>
//#include <iomanip>
//using namespace std;

int twentyoneth(void)
{

long p = 30000;

cout<<p <<" printed using the default character pad\n"
        <<"for right and left justified and as hex\n"
        <<"with internal justification.\n"
        <<"----------------------------------------\n";
cout.setf(ios::showbase);
cout<<setw(10)<<p<<endl;
cout.setf(ios::left, ios::adjustfield);
cout<<setw(10)<<p<<endl;
cout.setf(ios::internal, ios::adjustfield);
cout<<setw(10)<<hex<<p<<"\n\n";

cout<<"Using character padding"<<endl;
cout<<"-----------------------"<<endl;
cout.setf(ios::right, ios::adjustfield);
cout.fill('#');
cout<<setw(10)<<dec<<p<<'\n';
cout.setf(ios::left, ios::adjustfield);
cout<<setw(10)<<setfill('$')<<p<<'\n';
cout.setf(ios::internal, ios::adjustfield);
cout<<setw(10)<<setfill('*')<<hex<<p<<endl;
system("pause");
cin.clear();
return 0;
}

//================================================================================================================
int main() {
	first();
	second();
	third();
	forth();
	fifth();
	sixth();
	seventh();
	nineth();
	eighth();
	tenth();
	eleventh();
	tvelveth();
	thirteenth();
	fifteenth();
	sixteenth();
	seventeenth();
	eighteenth();
	nineteenth();
	twenteeth();
	twentyoneth();
	return 0;
}
