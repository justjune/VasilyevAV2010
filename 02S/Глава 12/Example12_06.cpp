// ���������� �����
#include <iostream>
using namespace std;
//���������� ����� - ������ ������ ���������� ����������!:
template <class X> class MyClass{
X value;
public:
MyClass(X m){
value=m;}
void operator()(X m){value=m;}
void operator>>(bool lf){
if (lf)
	cout<<"value = "<<value<<endl;
else
	cout << "value = " << value << ", ";
}
};
int main(){
//�������� ������� � int-�����:
MyClass<int> a(5);
a>>false;
a(3);
a>>true;
//�������� ������� � char-�����:
MyClass<char> b('x');
b>>false;
b('z');
b>>true;
return 0;}