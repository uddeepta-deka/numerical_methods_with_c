//This program evaluates an infinite series for sine(x)

#include<stdio.h>
#include<math.h>

main()
{

float x,acc,t,s;
int i=1;
printf("Enter the accuracy desired and the value of x: \t");
scanf("%f,%f",&acc,&x);
t=x;s=x;
do
{
t*=-x*x/((2*i+1)*2*i);
s+=t;
i+=1;
}while(fabs(t/s)>acc);
printf("The sum of the series is: %f\n",s);

}
