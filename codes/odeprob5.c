
#include<stdio.h>
#include<math.h>

float f1(float t,float x,float y,float z)
{
	return (-10.0*(x-y));
}

float f2(float t,float x,float y,float z)
{
	float alpha=50.0;
	return (alpha*x-x*z-y);
}

float f3(float t,float x,float y,float z)
{
	return (x*y-(8.0/3.0)*z);
}

main()
{
	FILE *fp=NULL;
	fp=fopen("odeprob5.txt","w");
	float t,x=1.0,y=1.0,z=1.0,ti=0.0,tf=20.0,h=0.01;
	float k1,k2,k3,k4,m1,m2,m3,m4,u1,u2,u3,u4;
	for(t=ti;t<=tf;t+=0.01)
	{
		k1=h*f1(t,x,y,z);
		m1=h*f2(t,x,y,z);
		u1=h*f3(t,x,y,z);

		k2=h*f1(t+h/2.0,x+k1/2.0,y+m1/2.0,z+u1/2.0);
		m2=h*f2(t+h/2.0,x+k1/2.0,y+m1/2.0,z+u1/2.0);
		u2=h*f3(t+h/2.0,x+k1/2.0,y+m1/2.0,z+u1/2.0);

		k3=h*f1(t+h/2.0,x+k2/2.0,y+m2/2.0,z+u2/2.0);
		m3=h*f2(t+h/2.0,x+k2/2.0,y+m2/2.0,z+u2/2.0);
		u2=h*f3(t+h/2.0,x+k2/2.0,y+m2/2.0,z+u2/2.0);
	
		k4=h*f1(t+h,x+k3,y+m3,z+u3);
		m4=h*f2(t+h,x+k3,y+m3,z+u3);
		u4=h*f3(t+h,x+k3,y+m3,z+u3);

		x+=(k1+2.0*(k2+k3)+k4)/6.0;
		y+=(m1+2.0*(m2+m3)+m4)/6.0;
		z+=(u1+2.0*(u2+u3)+u4)/6.0;

		if(t>6)
		fprintf(fp,"%f\t%f\t%f\t%f\n",t,x,y,z);
	}
}
