//This program generates data for the problem 2 in chapter on series

#include<stdio.h>
#include<math.h>

main()
{
	FILE *fp=NULL;
	float pi=4.0*atan(1.0);
	float x,t,sum,acc=0.0001;
	int i;
	fp=fopen("cosine.txt","w");
	for (x=0.0;x<=pi;x+=0.001)
	{
		t=1.0;sum=1.0;i=0;		
		do
		{
			t*=(-x*x)/((2.0*i+2.0)*(2.0*i+1.0));
			sum+=t;			
			i+=1;
		}while(fabs(t/sum)>acc);	
		fprintf(fp,"%f\t%f\n",x,sum);
	}
	fclose(fp);
}
