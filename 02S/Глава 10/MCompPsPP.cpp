#include"Chapter10\Example10_04\MComp.h"
// ����������� ���������
MComp operator++(MComp &x, int unused){
x.Im++;
return x;}