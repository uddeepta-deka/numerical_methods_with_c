//secant method example

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (sin(x)-x*cos(x));
}

main()
{
	float acc=0.00001,x1,x2,x3;
	printf("Input x1,x2 : ");
	scanf("%f,%f",&x1,&x2);
	do	
	{
		x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
		x1=x2;
		x2=x3;			
	}while(fabs(f(x3))>acc);
	printf("\nroot=%f f(x)=%f\n\n",x3,f(x3));
}
