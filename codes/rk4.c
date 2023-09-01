//This program solves the second order differential equation for a spring mass system
//choosing k=m=A=1
//equation is my''+k*y=0
//solution is y=Acos(wt) where w=sqrt(k/m)
//intital conditions: y(t=0)=A, y'(t=0)=0


#include<stdio.h>
#include<math.h>

float f1(float t,float y,float z)
{
	return z;
}

float f2(float t,float y,float z)
{
	return -y;
}


main()
{
	float h=0.01,t,y,z,k1,k2,k3,k4,m1,m2,m3,m4,r;
	FILE *fp=NULL;
	fp=fopen("rk4.txt","w");
	t=0.0;y=1.0;z=0.0; // Initial conditions
	do
	{
		k1=h*f1(t,y,z);
		m1=h*f2(t,y,z);
		k2=h*f1(t+h/2.0,y+k1/2.0,z+m1/2.0);
		m2=h*f2(t+h/2.0,y+k1/2.0,z+m1/2.0);
		k3=h*f1(t+h/2.0,y+k2/2.0,z+m2/2.0);
		m3=h*f2(t+h/2.0,y+k2/2.0,z+m2/2.0);
		k4=h*f1(t+h,y+k3,z+m3);
		m4=h*f2(t+h,y+k3,z+m3);
		y+=(k1+2.0*(k2+k3)+k4)/6.0;
		z+=(m1+2.0*(m2+m3)+m4)/6.0;
		t+=h;
		r=cos(t);
		fprintf(fp,"%f\t%f\t%f\n", t,y,r);		
	}
	while(t<=10.0);
}
