// Перечисления с указанием значений констант
#include <iostream>
using namespace std;
int main(){
enum  color {red=10, green, blue=100, yellow, black};
color car,bus,van;
car=green;
bus=blue;
van=black;
cout<<"Car is "<<car<<", bus is "<<bus<<" and van is "<<van<<endl;
cin.get();
return 0;
}