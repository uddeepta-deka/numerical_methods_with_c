#include<stdio.h>
#include<math.h>

float f(float x,float a,float b)
{
 return exp(a*x)-b*x*x;
}

float f1(float x,float a,float b)
{
 return a*exp(a*x)-2.0*b*x;
}

float bisection()
{
	float x,xm,xl,xr,acc=0.0001,xinc=0.5,z,x1,x2,a,b;
	int iter=0;
	printf("\nInput x range x1,x2 : ");
	scanf("%f,%f",&x1,&x2);
	printf("\nInput the values of a,b: ");
	scanf("%f,%f",&a,&b);
	for(x=x1;x<=x2;x+=xinc)
	{
	  if(f(x,a,b)*f(x+xinc,a,b)<0)
	  {
		xl=x;xr=x+xinc;
		do	
		{
			xm=(xl+xr)/2.0;
			if(f(xm,a,b)*f(xr,a,b)<0)
				xl=xm;
			if(f(xm,a,b)*f(xl,a,b)<0)
				xr=xm;
			z=fabs((xl-xr)/(xl+xr));
			iter+=1;	
		}while(z>acc);
	  	printf("\nroot=%f f(xm)=%f z=%f acc=%f iterations=%d\n\n",xm,f(xm,a,b),z,acc,iter);
	  }		
	}	
}


float secant()
{
	float x,acc=0.0001,x1,x2,x3,a,b;
	int iter=0;
	printf("\nInput x1,x2 : ");
	scanf("%f,%f",&x1,&x2);
	printf("\nInput a,b: ");
	scanf("%f,%f",&a,&b);
	do	
	{
		x3=(x1*f(x2,a,b)-x2*f(x1,a,b))/(f(x2,a,b)-f(x1,a,b));
		x1=x2;
		x2=x3;			
		iter+=1;
	}while(fabs(f(x3,a,b))>acc);
	printf("\nroot=%f f(x)=%f Iterations=%d\n\n",x3,f(x3,a,b),iter);
}


float nraphson()
{
	float x,acc=0.0001,h,a,b;
	int iter=0;
	printf("\nEnter the value of x: ");
	scanf("%f",&x);
	printf("\nEnter the value of a,b: ");
	scanf("%f,%f",&a,&b);
	do
	{
		h=-f(x,a,b)/f1(x,a,b);
		x+=h;
		iter+=1;
	}while(fabs(h/x)>acc);
	printf("\nThe root is %f and the value of f at the root is %f. Iterations=%d\n",x,f(x,a,b),iter);
}


main()
{
	char a;
 	printf("\nPress 'a' for Bisection method.\nPress 'b' for Secant method.\nPress 'c' for Newton raphson\n");
	scanf("%c",&a);
	switch (a)
	{
		case 'a':
			bisection();
			break;
		case 'b':
			secant();
			break;
		case 'c':
			nraphson();
			break;
		default:
			printf("\nInvalid input");
	}	
}
