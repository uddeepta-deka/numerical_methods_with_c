//spherical bessel function

#include<stdio.h>
#include<math.h>

int fact(int x)
{
	if(x!=0)	
	return x*fact(x-1);
	else return 1;

}

float f(float z, float theta, int n)
{
	float res,pi;
	pi=4.0*atan(1.0);
	res=pow(z,n)*cos(z*cos(theta))*pow(sin(theta),2*n+1)/(fact(n)*pow(2,n+1));
	return res;
}

float simp(float a,float b,int n,float z,int m)
{
	int i;
	float x,y;
	float h=(b-a)/n;
	float s=f(z,a,m)+f(z,b,m);
	for(i=1;i<n;i+=2)
	{
		x=a+i*h;
		y=f(z,x,m);
		s+=4.0*f(z,x,m);
	}
	for(i=2;i<n;i+=2)
	{
		x=a+i*h;
		y=f(z,x,m);
		s+=2.0*f(z,x,m);
	}
	s*=h/3.0;
	return s;
}


main()
{
  int n,m;
  float pi,i1,i2,z1,z2,z3;
  FILE *fp=NULL;
  fp=fopen("int6.txt","w");
  pi=4.0*atan(1.0);
  
  printf("Enter order of spherical bessel function: ");
  scanf("%d",&m);
  printf("Enter n: ");
  scanf("%d",&n);

  float a=0.0,b=pi,z,zinc=0.1;
  for(z=0.0;z<=10.0;z+=zinc)
    {
      i1=simp(a,b,n,z,m);
      i2=simp(a,b,n,z+zinc,m);
	
      if(i1*i2<0)
	{
		z1=z;z2=z+zinc;
		do	
		{
		z3=(z1*i2-z2*i1)/(i2-i1);
		z1=z2;
		z2=z3;			
		}while(fabs(simp(a,b,n,z3,m))>0.0001);
		printf("root is at %f\n",z3);
	}
      fprintf(fp,"%f\t%f\n",z,i1);
    }
}
