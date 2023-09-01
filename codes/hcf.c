/*This program finds the HCF of two natural numbers*/

#include<stdio.h>

main()
{
  int a,b,i,h;
  printf("Enter two numbers for HCF:");
  scanf("%d %d",&a,&b);
  for (i=1;i<=a && i<=b;i++)
	{
	  if(a%i==0 && b%i==0)
	    {
	      h=i;
	    }
	}
   printf("The HCF of %d and %d is %d\n",a,b,h);
}
