#include"Chapter10\Example10_04\MComp.h"

// Префиксный инкремент
MComp operator++(MComp &x){
x.Re++;
return x;}