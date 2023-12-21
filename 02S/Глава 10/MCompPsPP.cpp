#include"Chapter10\Example10_04\MComp.h"
// Постфиксный инкремент
MComp operator++(MComp &x, int unused){
x.Im++;
return x;}