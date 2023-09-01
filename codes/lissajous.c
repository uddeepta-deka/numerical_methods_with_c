//This program generates data for LIssajous figures

#include<stdio.h>
#include<math.h>

main()
{
	float x,y,pi,i;
	FILE *fp=NULL;
	pi=4.0*atan(1.0);
	fp=fopen("lissajous.txt","w");
	for (i=0;i<=4*pi;i=i+0.0001)
	{
		x=sin(i); y=0.5*sin((2.5*i)+(pi));
		fprintf(fp,"%f \t %f \n",x,y);
	}
	fclose(fp);
}
