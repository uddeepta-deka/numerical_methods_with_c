#include<stdio.h>
#include<math.h>

#define pi 3.141592654

float y(float x)
{
	if((x>=0)&&(x<pi))
		return x;
	else if((x>=pi)&&(x<2.0*pi))
		return (2.0*pi-x);
}

main()
{
	float x,m;
	int n;
	FILE *fp=NULL;
	fp=fopen("gnuprob3.txt","w");
	for(x=-6.0*pi;x<=6.0*pi;x+=0.001*pi)
	{	
		n=(int)(x/(2.0*pi));
		m=fabs(x-2.0*pi*n);
		fprintf(fp,"%f\t%f\n",x,y(m));
	}
}

