//Bessel function integral form

#include<stdio.h>
#include<math.h>

float f(float z, float x)
{
	float res,pi;
	pi=4.0*atan(1.0);
	res=cos(z*cos(x))/(2.0*pi);
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

main()
{
  int n;
  float pi,i1,i2,z1,z2,z3;
  FILE *fp=NULL;
  fp=fopen("int5.txt","w");
  pi=4.0*atan(1.0);
  printf("Enter n: ");
  scanf("%d",&n);
  float a=0.0,b=2.0*pi,z,zinc=0.1;
  for(z=0.0;z<=12.0;z+=zinc)
    {
      i1=simp(a,b,n,z);
      i2=simp(a,b,n,z+zinc);
	
      if(i1*i2<0)
	{
		z1=z;z2=z+zinc;
		do	
		{
		z3=(z1*i2-z2*i1)/(i2-i1);
		z1=z2;
		z2=z3;			
		}while(fabs(simp(a,b,n,z3))>0.0001);
		printf("root is at %f\n",z3);
	}
      fprintf(fp,"%f\t%f\n",z,i1);
    }
}
