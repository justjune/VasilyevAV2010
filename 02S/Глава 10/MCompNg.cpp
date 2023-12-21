#include"Chapter10\Example10_04\MComp.h"
MComp operator!(MComp &x){
x.Im*=-1;
return x;}