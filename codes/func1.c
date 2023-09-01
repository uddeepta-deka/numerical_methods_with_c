/*This is a program to illustrate the use of functions*/

#include<stdio.h>
#include<math.h>

//function definition

float f(float x)
{
float z;
z=x*x*x + sin(x)*log(x);
return z;
}

//Inline function
//#define j(x)(x*x*x+sin(x)*log(x))

main()
{
float y;
printf("Supply the value for which you want to evaluate the value of the function\n");
scanf("%f",&y);
printf("%6.2f %6.2f\n",y,f(y));
//printf("%6.2f %6.2f\n",y,j(y));
}
