#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	if(fabs(x)>fabs(y))
		return (pow(x,2)+pow(y,4));
	else if(fabs(x)==fabs(y))
		return (pow(x,2)*(pow(x,2)+1));
	else if(fabs(x)<fabs(y))
		return (pow(y,2)+pow(x,4));
}

main()
{
	FILE *fp=NULL;
	float x,y;
	fp=fopen("ch1p2.txt","w");
	for(x=-1.0;x<=1.0;x+=0.25)
		for(y=-1.0;y<=1.0;y+=0.25)
		{
			fprintf(fp,"%f\t%f\t%f\n",x,y,f(x,y));
		}
}
