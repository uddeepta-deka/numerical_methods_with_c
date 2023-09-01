//This program defines the gamma function

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
float n,c;
scanf("%f",&n);
c=g(n);
printf ("%f",c);
}
