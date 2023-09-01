#include<stdio.h>
#include<math.h>

float f(float x, float t)
{
	float res;
	res=cos(pow(x,1.5)*cos(t))*pow(sin(t),3);
	return res;
}

float simp(float a,float b,int n,float z)
{
	int i;
	float x,y;
	float h=(b-a)/n;
	float s=f(z,a)+f(z,b);
	for(i=1;i<n;i+=2)
	{
		x=a+i*h;
		y=f(z,x);
		s+=4.0*f(z,x);
	}
	for(i=2;i<n;i+=2)
	{
		x=a+i*h;
		y=f(z,x);
		s+=2.0*f(z,x);
	}
	s*=h/3.0;
	return s;
}

void bisec(float a,float b,int n)
{
  float x=0.0,xm,xl,xr,acc=0.0001,xinc=0.1,z;int count=0;
	while(count==0)
	{
	  if(simp(a,b,n,x)*simp(a,b,n,x+xinc)<0)
	  {
		xl=x;xr=x+xinc;
		do	
		{
			xm=(xl+xr)/2.0;
			if(simp(a,b,n,xm)*simp(a,b,n,xr)<0)
				xl=xm;
			if(simp(a,b,n,xm)*simp(a,b,n,xl)<0)
				xr=xm;
			z=fabs((xl-xr)/(xl+xr));	
		}while(z>acc);
		count++;
	  }		
	  x+=xinc;
	}
	printf("The first root is at x= %f\n",xm);
}

main()
{
  int n;
  float pi,i;
  FILE *fp=NULL;
  fp=fopen("int4.txt","w");
  pi=4.0*atan(1.0);
  printf("Enter n: ");
  scanf("%d",&n);
  float a=0.0,b=pi,x,xinc=0.1;
  for(x=0.0;x<10.0;x+=xinc)
    {
      i=simp(a,b,n,x);
      fprintf(fp,"%f\t%f\n",x,i);
    }
  bisec(a,b,n);
 
}


