//Bisection method example

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (sin(x)-x*cos(x));
}

main()
{
	float x,xm,xl,xr,acc=0.00001,xinc=0.5,z,x1,x2;
	printf("\nInput x1,x2 : ");
	scanf("%f,%f",&x1,&x2);
	for(x=x1;x<=x2;x+=xinc)
	{
	  if(f(x)*f(x+xinc)<0)
	  {
		xl=x;xr=x+xinc;
		do	
		{
			xm=(xl+xr)/2.0;
			if(f(xm)*f(xr)<0)
				xl=xm;
			if(f(xm)*f(xl)<0)
				xr=xm;
			z=fabs((xl-xr)/(xl+xr));	
		}while(z>acc);
	  	printf("\nroot=%f f(xm)=%f z=%f acc=%f\n\n",xm,f(xm),z,acc);
	  }		
	}	
}
