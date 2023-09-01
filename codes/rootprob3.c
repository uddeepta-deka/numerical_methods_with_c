#include<stdio.h>
#include<math.h>


float f(float y,float x0)
{
	return (pow(y,3)+x0*y+pow(x0,3)+1.0);
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
	fp=fopen("rootprob3.txt","w");	
	float x,r,y,yinc=0.1;
	for(x=-1.5;x<=1.5;x+=0.01)
		for(y=-2.0;y<=2.0;y+=yinc)
			if(f(y,x)*f(y+yinc,x)<0)
			{
				r=secant(y,yinc,x);
				fprintf(fp,"%f\t%f\n",x,r);
			}
}
