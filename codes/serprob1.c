//This program finds the sum of series for problem 1 in the chapter on series

#include<stdio.h>
#include<math.h>

main()
{
	float sum=1.0,x,r;
	int i;
	printf("Provide the value of x : ");
	scanf("%f",&x);
	for(i=2;i<=20;i++)
	{
		r=1.0/pow(x,i);
		sum+=r;
	}
	printf("The sum of the series is= %f\n",sum);
}
