#include<stdio.h>
#include<math.h>

main()
{
	float d,a,b,c,root1,root2;
	printf("Enter a,b,c for ax2+bx+c=0 :");
	scanf("%f,%f,%f",&a,&b,&c);
	d=b*b-4.0*a*c;
	if (d==0)
	{
		root1=-b/(2.0*a);
		printf("The roots are equal and value is: %f\n",root1);	
	}
	else if(d>0)
	{
		root1=(-b+sqrt(d))/(2.0*a);
		root2=(-b-sqrt(d))/(2.0*a);
		printf("The roots are real and equal to: %f and %f\n",root1,root2);
	}
	else
	{
		d=-d;		
		root1=-b/(2.0*a);
		printf("The roots are imaginary and equal to : %f+i%f and %f-i%f\n",root1,d,root1,d);	
	}
}
