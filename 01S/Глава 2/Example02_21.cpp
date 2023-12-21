// Вычисление объема тела методом "Монте-Карло
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main(){

	clock_t start, finish;
	double  duration;

//Число pi:
const double pi=3.1415;
//Рабочие переменные программы:
double R,H,V,V0,x,y,z;
//Число точек N (по каждой из координат) 
//и число внутренних точек n:
int N=1500,n=0;
//Ввод параметров R и H:
cout<<"Enter R = ";
cin>>R;
cout<<"Enter H = ";
cin>>H;
//Объем параллелепипеда:
V0=4*R*R*(H+R);

// Measure the duration of an event.
printf("Start of the calculation\n");
start = clock();

//Перебор всех точек:
for(int i=0;i<=N;i++){
   x=2*i*R/N-R;
   for(int j=0;j<=N;j++){
      y=2*j*R/N-R;
      for(int k=0;k<=N;k++){
         z=k*(H+R)/N;
         //Подсчет внутренних точек:
         if(((sqrt(x*x+y*y)/R<=z/H)&&(z<=H))||((x*x+y*y+(z-H)*(z-H)<=R*R)&&(z>H)))
            n++;
      }
   }
}

finish = clock();
duration = (double)(finish - start) / CLOCKS_PER_SEC;
printf("Calculation end: %2.1f seconds\n", duration);

//Объем тела:
V=V0*n/pow(N+1,3);
//Вывод вычисленного и точного значений:
cout<<"V = "<<V<<" : "<<pi*R*R*H/3+2*pi*pow(R,3)/3<<endl;
return 0;
}