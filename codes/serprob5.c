// This program generates data for the series

#include<stdio.h>
#include<math.h>

#define pi 3.14159
float g(float x)
{
 if((x!=0.5)&&(x!=0.0)&&(x!=1.0))
	return (x-1.0)*g(x-1.0);
 else if(x==0.5)
	return sqrt(pi);
 else return 1.0;
}


main()
{
	FILE *fp=NULL;
	fp=fopen("serprob5.txt","w");
	int n=2,k,i;
	float z,t,sum;
	for (z=0.0;z<=5.0;z+=0.01)
	{
		k=0;t=z*z/(2*g(0.5));sum=t;i=0;	
		do
		{
			t*=z*z*g((k+1-n)/2)/(4*(k+1)*(k+2)*g((k+3-n)/2));			
			sum+=t;
			k+=2;i++;
		}while(fabs(t/sum)>0.001);
		fprintf(fp,"%f\t%f\t%d\n",z,sum,i);
	}	
	fclose(fp);
}
