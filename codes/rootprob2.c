//This program finds first 2 positive roots of the bessel function j(n,x) using its series expansion by bisection method

#include<stdio.h>
#include<math.h>

int fact(int a)
{
	if(a!=0)	
	return a*fact(a-1);
	else return 1;
}

float bes(int n,float x)
{
	float t,sum;
	int i=0;
	t=(float)1.0/fact(n);
	sum=t;
	do
	{
		t*=-x*x/(4.0*(i+1.0)*(n+i+1.0));
		sum+=t;
		i+=1;	
	}while(fabs(t/sum)>0.0001);
	return sum*pow((x/2.0),n);	
}

main()
{
	float x=0.0,xm,xl,xr,acc=0.0001,xinc=0.2,z;
	int count=0,n;
	printf("\nEnter n: ");
	scanf("%d",&n);	

	while(count<2)
	{
	 if((bes(n,x)*bes(n,x+xinc))<0)
	  {
		xl=x;xr=x+xinc;
		do	
		{
			xm=(xl+xr)/2.0;
			if(bes(n,xm)*bes(n,xr)<0)
				xl=xm;
			if(bes(n,xm)*bes(n,xl)<0)
				xr=xm;
			z=fabs(bes(n,xm));
		}while(z>acc);
	  	printf("\nroot=%12.4e j(xm)=%f z=%f\n\n",xm,bes(n,xm),z);
		count+=1;
	  }
	  x+=xinc;			
	}
}
