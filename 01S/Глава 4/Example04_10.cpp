// �������� ������� � ��������� �������
#include <iostream>
using namespace std;
//��� ���������� ������� ���� ������ ������:
void show(int n[5]){
for(int i=0;i<6;i++)
   cout<<"n["<<i<<"]="<<n[i]<<endl;
}
int main(){
int n[6]={1,2,3,4,5,6}; // ������ � ������ ������� ���
show(n);
return 0;
}