/* format sampler 

   Prints numbers using a variety of C++ format options,
      to illustrate what these functions do.

   Obtained from Bob Keller in October 1997, written
   by him sometime long before that. 

   https://www.cs.hmc.edu/~geoff/classes/hmc.cs070.200109/notes/io.html
*/

#include <iostream>
#include <iomanip>
using namespace std;

void print_numbers(int W)
{
cout << endl << "the results are:" << endl;
cout << "Integer:" << endl;
cout << setw(W) << 1 << endl;
cout << setw(W) << -1 << endl;
cout << setw(W) << 1234567890 << endl;
cout << setw(W) << -1234567890 << endl;
cout << "Float point:" << endl;
cout << setw(W) << 1.2345678e9 << endl;
cout << setw(W) << -1.2345678e9 << endl;
cout << setw(W) << 1.0 << endl;
cout << setw(W) << -1.0 << endl;
cout << endl;
}

int main()
{
int w;
w = 0;
cout << "With no format settings " << endl;
print_numbers(w);

cout << "With only scientific on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With only fixed on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << setprecision(4);

cout << "With scientific and precision(4) on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed and precision(4) on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed, precision(4) on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific and fixed, precision(4), showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);
cout << resetiosflags(ios::showpoint);


cout << setiosflags(ios::left);
cout << setprecision(0);

cout << "With scientific and left on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed and left on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific, fixed, and left on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << setprecision(4);

cout << "With scientific, left and precision(4) on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed, left and precision(4) on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed, left, precision(4) on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific and fixed, left, precision(4), showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);
cout << resetiosflags(ios::showpoint);

cout << resetiosflags(ios::left);
cout << setiosflags(ios::right);
cout << setprecision(0);

cout << "With scientific and right on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed and right on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific, fixed, and right on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific, fixed, right, and showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::showpoint);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << setprecision(4);

cout << "With scientific, right and precision(4) on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed, right and precision(4) on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed, right, precision(4) on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific and fixed, right, precision(4), showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);
cout << resetiosflags(ios::showpoint);

cout << resetiosflags(ios::right);

cout << "All  of the following are with setw(15)" << endl;
w = 18;
cout << setprecision(0);

cout << "With no format settings " << endl;
print_numbers(w);

cout << "With only scientific on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With only fixed on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << setprecision(4);

cout << "With scientific and precision(4) on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed and precision(4) on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed, precision(4) on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific and fixed, precision(4), showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);
cout << resetiosflags(ios::showpoint);

cout << setiosflags(ios::left);
cout << setprecision(0);

cout << "With scientific and left on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed and left on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific, fixed, and left on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << setprecision(4);

cout << "With scientific, left and precision(4) on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed, left and precision(4) on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed, left, precision(4) on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific and fixed, left, precision(4), showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);
cout << resetiosflags(ios::showpoint);

cout << resetiosflags(ios::left);
cout << setiosflags(ios::right);
cout << setprecision(0);

cout << "With scientific and right on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed and right on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific, fixed, and right on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << setprecision(4);

cout << "With scientific, right and precision(4) on";
cout << setiosflags(ios::scientific);
print_numbers(w);
cout << resetiosflags(ios::scientific);

cout << "With fixed, right and precision(4) on";
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);

cout << "With scientific and fixed, right, precision(4) on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);

cout << "With scientific and fixed, right, precision(4), showpoint on";
cout << setiosflags(ios::scientific);
cout << setiosflags(ios::fixed);
cout << setiosflags(ios::showpoint);
print_numbers(w);
cout << resetiosflags(ios::fixed);
cout << resetiosflags(ios::scientific);
cout << resetiosflags(ios::showpoint);
}

/* output of this program
With no format settings 

the results are:
1
1234567890
-1
-1234567890
1
1.23457e+09
-1
-1.23457e+09

With only scientific on
the results are:
1
1234567890
-1
-1234567890
1.000000e+00
1.234568e+09
-1.000000e+00
-1.234568e+09

With only fixed on
the results are:
1
1234567890
-1
-1234567890
1.000000
1234567800.000000
-1.000000
-1234567800.000000

With scientific and fixed on
the results are:
1
1234567890
-1
-1234567890
1
1.23457e+09
-1
-1.23457e+09

With scientific and precision(4) on
the results are:
1
1234567890
-1
-1234567890
1.0000e+00
1.2346e+09
-1.0000e+00
-1.2346e+09

With fixed and precision(4) on
the results are:
1
1234567890
-1
-1234567890
1.0000
1234567800.0000
-1.0000
-1234567800.0000

With scientific and fixed, precision(4) on
the results are:
1
1234567890
-1
-1234567890
1
1.235e+09
-1
-1.235e+09

With scientific and fixed, precision(4), showpoint on
the results are:
1
1234567890
-1
-1234567890
1.000
1.235e+09
-1.000
-1.235e+09

With scientific and left on
the results are:
1
1234567890
-1
-1234567890
1.000000e+00
1.234568e+09
-1.000000e+00
-1.234568e+09

With fixed and left on
the results are:
1
1234567890
-1
-1234567890
1
1234567800
-1
-1234567800

With scientific, fixed, and left on
the results are:
1
1234567890
-1
-1234567890
1
1e+09
-1
-1e+09

With scientific, left and precision(4) on
the results are:
1
1234567890
-1
-1234567890
1.0000e+00
1.2346e+09
-1.0000e+00
-1.2346e+09

With fixed, left and precision(4) on
the results are:
1
1234567890
-1
-1234567890
1.0000
1234567800.0000
-1.0000
-1234567800.0000

With scientific and fixed, left, precision(4) on
the results are:
1
1234567890
-1
-1234567890
1
1.235e+09
-1
-1.235e+09

With scientific and fixed, left, precision(4), showpoint on
the results are:
1
1234567890
-1
-1234567890
1.000
1.235e+09
-1.000
-1.235e+09

With scientific and right on
the results are:
1
1234567890
-1
-1234567890
1.000000e+00
1.234568e+09
-1.000000e+00
-1.234568e+09

With fixed and right on
the results are:
1
1234567890
-1
-1234567890
1
1234567800
-1
-1234567800

With scientific, fixed, and right on
the results are:
1
1234567890
-1
-1234567890
1
1e+09
-1
-1e+09

With scientific, right and precision(4) on
the results are:
1
1234567890
-1
-1234567890
1.0000e+00
1.2346e+09
-1.0000e+00
-1.2346e+09

With fixed, right and precision(4) on
the results are:
1
1234567890
-1
-1234567890
1.0000
1234567800.0000
-1.0000
-1234567800.0000

With scientific and fixed, right, precision(4) on
the results are:
1
1234567890
-1
-1234567890
1
1.235e+09
-1
-1.235e+09

With scientific and fixed, right, precision(4), showpoint on
the results are:
1
1234567890
-1
-1234567890
1.000
1.235e+09
-1.000
-1.235e+09

All  of the following are with setw(15)
With no format settings 

the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
       1.23457e+09
                -1
      -1.23457e+09

With only scientific on
the results are:
                 1
        1234567890
                -1
       -1234567890
      1.000000e+00
      1.234568e+09
     -1.000000e+00
     -1.234568e+09

With only fixed on
the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
        1234567800
                -1
       -1234567800

With scientific and fixed on
the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
             1e+09
                -1
            -1e+09

With scientific and precision(4) on
the results are:
                 1
        1234567890
                -1
       -1234567890
        1.0000e+00
        1.2346e+09
       -1.0000e+00
       -1.2346e+09

With fixed and precision(4) on
the results are:
                 1
        1234567890
                -1
       -1234567890
            1.0000
   1234567800.0000
           -1.0000
  -1234567800.0000

With scientific and fixed, precision(4) on
the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
         1.235e+09
                -1
        -1.235e+09

With scientific and fixed, precision(4), showpoint on
the results are:
                 1
        1234567890
                -1
       -1234567890
             1.000
         1.235e+09
            -1.000
        -1.235e+09

With scientific and left on
the results are:
1                 
1234567890        
-1                
-1234567890       
1.000000e+00      
1.234568e+09      
-1.000000e+00     
-1.234568e+09     

With fixed and left on
the results are:
1                 
1234567890        
-1                
-1234567890       
1                 
1234567800        
-1                
-1234567800       

With scientific, fixed, and left on
the results are:
1                 
1234567890        
-1                
-1234567890       
1                 
1e+09             
-1                
-1e+09            

With scientific, left and precision(4) on
the results are:
1                 
1234567890        
-1                
-1234567890       
1.0000e+00        
1.2346e+09        
-1.0000e+00       
-1.2346e+09       

With fixed, left and precision(4) on
the results are:
1                 
1234567890        
-1                
-1234567890       
1.0000            
1234567800.0000   
-1.0000           
-1234567800.0000  

With scientific and fixed, left, precision(4) on
the results are:
1                 
1234567890        
-1                
-1234567890       
1                 
1.235e+09         
-1                
-1.235e+09        

With scientific and fixed, left, precision(4), showpoint on
the results are:
1                 
1234567890        
-1                
-1234567890       
1.000             
1.235e+09         
-1.000            
-1.235e+09        

With scientific and right on
the results are:
                 1
        1234567890
                -1
       -1234567890
      1.000000e+00
      1.234568e+09
     -1.000000e+00
     -1.234568e+09

With fixed and right on
the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
        1234567800
                -1
       -1234567800

With scientific, fixed, and right on
the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
             1e+09
                -1
            -1e+09

With scientific, right and precision(4) on
the results are:
                 1
        1234567890
                -1
       -1234567890
        1.0000e+00
        1.2346e+09
       -1.0000e+00
       -1.2346e+09

With fixed, right and precision(4) on
the results are:
                 1
        1234567890
                -1
       -1234567890
            1.0000
   1234567800.0000
           -1.0000
  -1234567800.0000

With scientific and fixed, right, precision(4) on
the results are:
                 1
        1234567890
                -1
       -1234567890
                 1
         1.235e+09
                -1
        -1.235e+09

With scientific and fixed, right, precision(4), showpoint on
the results are:
                 1
        1234567890
                -1
       -1234567890
             1.000
         1.235e+09
            -1.000
        -1.235e+09



*/

