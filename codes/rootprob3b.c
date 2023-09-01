//This program finds roots of implicit function using bisection method

#include<stdio.h>
#include<math.h>


float f(float y,float x0)
{
	return (pow(y,3)+x0*y+pow(x0,3)+1.0);
}


float bisection(float y,float x)
{
		
	float ym,yl,yr,yinc=0.2;
	yl=y;yr=y+yinc;
		do	
		{
			ym=(yl+yr)/2.0;
			if(f(ym,x)*f(yr,x)<0)
				yl=ym;
			if(f(ym,x)*f(yl,x)<0)
				yr=ym;	
		}while(fabs((yl-yr)/(yl+yr))>0.0001);
		return ym;
}


main()
{
	FILE *fp=NULL;
	fp=fopen("rootprob3b.txt","w");	
	float x,y,yinc=0.2,r;
	for(y=-2.0;y<=2.0;y+=yinc)
		for(x=-1.5;x<=1.5;x+=0.01)
			if(f(y,x)*f(y+yinc,x)<0)
			{
				r=bisection(y,x);
				fprintf(fp,"%f\t%f\n",x,r);
			}
}
