MComp operator+(MComp y, double x){
MComp z;
z.Re=x+y.Re;
z.Im=y.Im;
return z;}