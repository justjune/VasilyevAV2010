#pragma once

#define DEBUG
#ifndef PI
#define PI 3.14159 // определение константы
#endif // !PI

#define SQR(a) ((a)*(a)) // удачный макрос
#define SQ(a) a*a // не удачный макрос

#define MKSTR( x ) #x // аргумент будет заключен в кавычки
#define CONCAT( x, y )  x ## y // аргументы будут "сцеплены"
