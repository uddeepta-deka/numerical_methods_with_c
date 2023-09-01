//Time period of a pendulum

#include<stdio.h>
#include<math.h>


float t1(float A)
{
  float pi;
  pi=4.0*atan(1.0);
  return (2*pi*(1+pow(A/4,2)));
}

float t(float A,float x)
{
  float res;
  res=4.0/(1-(sin(A/2)*sin(A/2)*sin(x)*sin(x)));
  return res;
}

main()
{
  FILE *fp1=NULL;
  FILE *fp2=NULL;
  FILE *fp3=NULL;
  FILE *fp4=NULL;
  fp1=fopen("int2a.txt","w");
  fp2=fopen("int2b.txt","w");
  fp3=fopen("int2c.txt","w");
  fp4=fopen("int2d.txt","w");

  float y,h,s,a,b,A,pi,pererr;
  pi=4.0*atan(1.0);
  int i,n;
  printf("Enter the number of intervals: ");
  scanf("%d",&n);
  printf("Enter the lower, upper limits: ");
  scanf("%f,%f",&a,&b);
  h=(b-a)/n;


  for(A=0.01*pi;A<0.99*pi;A+=0.01*pi)
    {
      s=0;y=0;                 //Trapezoidal method
      for(i=1;i<n;i++)
	{
	  s+=t(A,a+i*h);
	}
      y=(t(A,a)+t(A,b)+2.0*s)*h/2.0;
      fprintf(fp1,"%f\t%f\n",A,y);

      s=t(A,a)+t(A,b);         //Simpson's method
      for(i=1;i<n;i+=2)
	{
   	  y=t(A,a+i*h);
	  s+=4.0*y;
	}
      for(i=2;i<n;i+=2)
	{
	  y=t(A,a+i*h);
	  s+=2.0*y;
	}
      s*=h/3.0;
      pererr=fabs(t1(A)-s)*100.0/s;      

      fprintf(fp2,"%f\t%f\n",A,s);
      fprintf(fp3,"%f\t%f\n",A,t1(A));
      fprintf(fp4,"%f\t%f\n",A,pererr);
    }
}
