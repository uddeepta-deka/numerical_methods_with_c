#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (atan(x)/(x*x));
}

float trap(float a,float b,float h,int n)
{
	float s=0,y; int i;
	for(i=1;i<n;i++)
	{
		s+=f(a+i*h);
	}
	y=(f(a)+f(b)+2.0*s)*h/2.0;
	return y;
}

float simpson(float a,float b,float h, int n)
{
	float s;int i;
	s=f(a)+f(b);
	for(i=1;i<n;i+=2)
		s+=4.0*f(a+i*h);
	for(i=2;i<n;i+=2)
		s+=2.0*f(a+i*h);
	s*=h/3.0;
	return s;
}

main()
{
	float a,b,h,tr,smp;
	int n;
	printf("Enter the number of intervals = ");
	scanf("%d",&n);
	printf("Enter the lower, upper limits: ");
	scanf("%f,%f",&a,&b);
	h=(b-a)/n;
	tr=trap(a,b,h,n);
	printf("The value of the integral using trapezoidal method is = %f\n",tr);
	smp=simpson(a,b,h,n);
	printf("The value of the integral using simpson's method is = %f\n",smp);

}
