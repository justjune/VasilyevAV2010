// Перегрузка методов
#include <iostream>
using namespace std;
class MyClass
{
	int a,b;
public:
	string name;
	//Перегруженный метод:
	void setab(int i,int j)
	{
		a=i;
		b=j;
	}
	void setab(int i)
	{
		a=i;
		b=i;
	}
	void getab()
	{
		cout << name.c_str() << endl;
		cout<<"\ta = "<<a<<endl;
		cout<<"\tb = "<<b<<endl;
	}
} obj1, obj2;

int main()
{
	obj1.setab(1,2);
	obj1.name = "Obj1";
	obj2.setab(3);

	obj2.name = "Obj2";

	obj1.getab();
	obj2.getab();
	return 0;
}