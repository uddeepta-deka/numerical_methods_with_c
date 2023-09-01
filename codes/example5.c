//This program is an example of else if statement and for loop

#include<stdio.h>
#include<math.h>

//function declaration

float f(float x, int n)
{
int i; 
float z=1.0,y;
 for (i=1;i<=n;i++)
 {
  z*=x;
 }
if(x<0.0)
 {
 y=z-1+exp(x);
 } 
else
 {
 y=z-log(1+x);
 }
return (y);
}

main()
{
 float q;
 int j;
 printf("Supply the value of x(float) and n(integer)\n");
 scanf("%f,%d",&q,&j);
 printf("x=%6.2f n=%d f=%6.2f\n",q,j,f(q,j));
}
