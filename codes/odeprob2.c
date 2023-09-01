//using RK4 method

#include<stdio.h>
#include<math.h>

float f2(float x,float y,float z,float w)
{
	return (-y*y*y-y-z-sin(w*x));
}

float f1(float x,float y,float z)
{
	return z;
}

main()
{
	float k1,k2,k3,k4,m1,m2,m3,m4,n1,n2,n3,n4,t,y,z,h=0.001,w1=0.5,w2=3.0;
	FILE *fp1=NULL;
	fp1=fopen("odeprob2a.txt","w");
	FILE *fp2=NULL;
	fp2=fopen("odeprob2b.txt","w");
	t=0.0;y=0.0;z=0.0;
	do
	{
		k1=h*f1(t,y,z);
		m1=h*f2(t,y,z,w1);
			
		k2=h*f1(t+h/2.0,y+k1/2.0,z+m1/2.0);
		m2=h*f2(t+h/2.0,y+k1/2.0,z+m1/2.0,w1);
		
		k3=h*f1(t+h/2.0,y+k2/2.0,z+m2/2.0);
		m3=h*f2(t+h/2.0,y+k2/2.0,z+m2/2.0,w1);
		  
		k4=h*f1(t+h,y+k3,z+m3);
		m4=h*f2(t+h,y+k3,z+m3,w1);
		
		y+=(k1+2.0*(k2+k3)+k4)/6.0;
		z+=(m1+2.0*(m2+m3)+m4)/6.0;
		t+=h;
		
		fprintf(fp1,"%f\t%f\n",t,y);
	}while(t<=20.0);

	t=0.0;y=0.0;z=0.0;
	do
	{
		k1=h*f1(t,y,z);
		m1=h*f2(t,y,z,w2);
			
		k2=h*f1(t+h/2.0,y+k1/2.0,z+m1/2.0);
		m2=h*f2(t+h/2.0,y+k1/2.0,z+m1/2.0,w2);
		
		k3=h*f1(t+h/2.0,y+k2/2.0,z+m2/2.0);
		m3=h*f2(t+h/2.0,y+k2/2.0,z+m2/2.0,w2);
		  
		k4=h*f1(t+h,y+k3,z+m3);
		m4=h*f2(t+h,y+k3,z+m3,w2);
		
		y+=(k1+2.0*(k2+k3)+k4)/6.0;
		z+=(m1+2.0*(m2+m3)+m4)/6.0;
		t+=h;
		
		fprintf(fp2,"%f\t%f\n",t,y);
	}while(t<=20.0);

}
