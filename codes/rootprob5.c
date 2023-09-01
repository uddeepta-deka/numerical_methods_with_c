#include<stdio.h>
#include<math.h>

float u(int n,float x)
{
	if(n==0)
		return 1.0;
	else if(n==1)
		return 2.0*x;
	else 
		return (2.0*x*u(n-1,x)-u(n-2,x));
}


void roots(int n)
{
	float x,xm,xl,xr,acc=0.0001,xinc=0.01;
	for(x=-1.0;x<=1.0;x+=xinc)
	{
	  if(u(n,x)*u(n,x+xinc)<0)
	  {
		xl=x;xr=x+xinc;
		do	
		{
			xm=(xl+xr)/2.0;
			if(u(n,xm)*u(n,xr)<0)
				xl=xm;
			if(u(n,xm)*u(n,xl)<0)
				xr=xm;	
		}while(fabs((xl-xr)/(xl+xr))>acc);
	  	printf("\nroot=%f f(xm)=%f acc=%f\n\n",xm,u(n,xm),acc);
	  }		
	}	
}


main()
{
	float x;int n;
	FILE *fp=NULL;
	fp=fopen("rootprob5.txt","w");
	printf("Give value of n: ");
	scanf("%d",&n);
	for(x=-1.0;x<=1.0;x+=0.01)	
		{fprintf(fp,"%f\t%f\n",x,u(n,x));}
	fclose(fp);
	roots(n);
}
