//This program solves the Kepler equation

#include<stdio.h>
#include<math.h>


float f(float y,float t)
{
	return (y-0.8*sin(y)-t);
}

float secant(float y,float yinc,float x)
{
	float x1=y,x2=y+yinc,x3,acc=0.00001;
	do	
	{
		x3=(x1*f(x2,x)-x2*f(x1,x))/(f(x2,x)-f(x1,x));
		x1=x2;
		x2=x3;
	}while(fabs(f(x3,x))>acc);
	return x3;		
}

main()
{
	FILE *fp=NULL;
	fp=fopen("rootprob4.txt","w");
	float pi=4.0*atan(1.0);	
	float x,r,ret,t,y,yinc=pi/50.0;	
	for(x=0.0;x<=2.0*pi;x+=0.01)
		for(y=x;y<=2.0*pi;y+=yinc)
			if(f(y,x)*f(y+yinc,x)<0)
			{
				ret=secant(y,yinc,x);
				r=2.0*(1.0-0.8*cos(ret));
				t=acos((cos(ret)-0.8)/(1.0-0.8*cos(ret)));
				fprintf(fp,"%f\t%f\n",r*cos(t),r*sin(t));
				fprintf(fp,"%f\t%f\n",r*cos(t),r*sin(2*pi-t));
			}
}
