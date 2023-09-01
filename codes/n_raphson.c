#include<stdio.h>
#include<math.h>

float f(float x)
{
 return (sin(x)-x*cos(x));
}

float f1(float x)
{
 return (x*sin(x));
}

main()
{
	float x,acc=0.00001,h;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	do
	{
		h=-f(x)/f1(x);
		x+=h;
	}while(fabs(h/x)>acc);
	printf("\nThe root is %f and the value of f at the root is %f\n",x,f(x));
}
