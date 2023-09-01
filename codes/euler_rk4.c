//This program solves an ordinary differential equation using both Euler and RK4 methods

#include<stdio.h>
#include<math.h>

float f(float t,float x)
{
	return (x*t*t+t*t*sin(pow(t,3)));
}

main()
{
	float t=0,x=1.0,h=0.01,s,ti,tf;  //'t' is independent variable and 'x' is dependent
	int i,n;
	float k1,k2,k3,k4;
	FILE *res1;
		res1=fopen("euler_rk41.txt","w");
	FILE *res2;
		res2=fopen("euler_rk42.txt","w");
	FILE *res3;	
		res3=fopen("euler_rk43.txt","w");
	ti=0;
	tf=1.0;

	//Euler method
	do
	{
		x=x+h*f(t,x);
		t+=h;
		fprintf(res1,"%f\t%f\n",t,x);
	}while(t<=tf);
	
	//Exact solution
	for(t=h;t<tf;t+=h)
	{
		s=-0.3*cos(pow(t,3))-0.1*sin(pow(t,3))+1.3*exp(0.33*pow(t,3));
		fprintf(res2,"%f\t%f\n",t,s);	
	}
	
	//4th order Runge-kutta method
	n=(tf-ti)/h;
	t=ti;x=1;
	for(i=1;i<=n;++i)
	{
		k1=h*f(t,x);
		k2=h*f(t+h/2.0,x+k1/2.0);
		k3=h*f(t+h/2.0,x+k2/2.0);
		k4=h*f(t+h,x+k3);
		x+=(k1+2*k2+2*k3+k4)/6.0;
		t+=h;
		fprintf(res3,"%f\t%f\n",t,x);
	}
}


