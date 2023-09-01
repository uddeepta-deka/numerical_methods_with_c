//This program is an example of the trapezoidal rule for numerical integration

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (1.0/((1.0+x)*(1.0+x)*(1.0+x)));
}


main()
{
	float y=0,h,s=0,a,b;
	int i,n;
	printf("Enter the number of intervals: ");
	scanf("%d",&n);
	printf("Enter the lower, upper limits: ");
	scanf("%f,%f",&a,&b);
	h=(b-a)/n;
	for(i=1;i<n;i++)
	{
		s+=f(a+i*h);
	}
	y=(f(a)+f(b)+2.0*s)*h/2.0;
	printf("The value of the integral is : %f\n",y);
}
