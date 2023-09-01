#include<stdio.h>
#include<math.h>

float g1(float x)
{
	return 1;
}

float g2(float x)
{
	return 1;
}

float g3(float x)
{
	return (4*x);
}

float g4(float x)
{
	int i; float sum,t;
	t=1.0;
	sum=t;
	for(i=1;i<=10;i++)
	{
		t*=(-x*x)/((2*i+3)*(2*i+2));
		sum+=t;
	}
	return sum;
}

float f1(float x, float y, float z)
{
	return z;
}

float f2(float x,float y,float z)
{
	float ret;
	ret = (g4(x)-g3(x)*y-g2(x)*z)/g1(x);
	return ret;
}

main()
{
	FILE *fp=NULL;
	fp=fopen("odeprob4.txt","w");
	float x,y=0.0,z=1.0,xi=0.0,xf=1.0,h=0.01;
	float k1,k2,k3,k4,m1,m2,m3,m4;
	for(x=xi;x<=xf;x+=h)
	{
		k1=h*f1(x,y,z);
		m1=h*f2(x,y,z);
		k2=h*f1(x+h/2.0,y+k1/2.0,z+m1/2.0);
		m2=h*f2(x+h/2.0,y+k1/2.0,z+m1/2.0);
		k3=h*f1(x+h/2.0,y+k2/2.0,z+m2/2.0);
		m3=h*f2(x+h/2.0,y+k2/2.0,z+m2/2.0);
		k4=h*f1(x+h,y+k3,z+m3);
		m4=h*f2(x+h,y+k3,z+m3);
		y+=(k1+2.0*(k2+k3)+k4)/6.0;
		z+=(m1+2.0*(m2+m3)+m4)/6.0;
		fprintf(fp,"%f\t%f\n",x,y);	
	}
}
