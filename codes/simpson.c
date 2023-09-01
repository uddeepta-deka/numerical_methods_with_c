//This program is an example of Simpson's rule

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (1.0/((1.0+x)*(1.0+x)*(1.0+x)));
}

float simpson(float a,float b,int n)
{
	int i;
	float x,y;
	float h=(b-a)/n;
	float s=f(a)+f(b);
	for(i=1;i<n;i+=2)
	{
		x=a+i*h;
		y=f(x);
		s+=4.0*f(x);
	}
	for(i=2;i<n;i+=2)
	{
		x=a+i*h;
		y=f(x);
		s+=2.0*f(x);
	}
	s*=h/3.0;
	return s;
}

main()
{
	int n;
	float a,b,integral;
	printf("Input the values of a,b,n: ");
	scanf("%f,%f,%d",&a,&b,&n);
	if(n%2==0)
	{
		integral=simpson(a,b,n);
		printf("Integral = %f\n",integral);
	}
	else 
		printf("Invalid input n\n");
}

