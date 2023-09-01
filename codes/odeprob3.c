//prey predator system

#include<stdio.h>
#include<math.h>

float c1=0.25;
float c2=0.01;
float c3=1.0;
float c4=0.01;

float f1(float t, float x, float y)
{
	return (c1*x-c2*x*y);
}

float f2(float t,float x,float y)
{
	return (-c3*y+c4*x*y);
}

main()
{
	FILE *fp=NULL;
	fp=fopen("odeprob3.txt","w");
	float t,x=100.0,y=10.0,ti=0.0,tf=20.0;
	float h=0.01,k1,k2,k3,k4,m1,m2,m3,m4;
	for(t=ti;t<=tf;t+=h)
	{
		k1=h*f1(t,x,y);
		m1=h*f2(t,x,y);
		k2=h*f1(t+h/2.0,x+k1/2.0,y+m1/2.0);
		m2=h*f2(t+h/2.0,x+k1/2.0,y+m1/2.0);
		k3=h*f1(t+h/2.0,x+k2/2.0,y+m2/2.0);
		m3=h*f2(t+h/2.0,x+k2/2.0,y+m2/2.0);
		k4=h*f1(t+h,x+k3,y+m3);
		m4=h*f2(t+h,x+k3,y+m3);
		x+=(k1+2.0*(k2+k3)+k4)/6.0;
		y+=(m1+2.0*(m2+m3)+m4)/6.0;
		fprintf(fp,"%f\t%f\t%f\n",t,x,y);
	}

}
