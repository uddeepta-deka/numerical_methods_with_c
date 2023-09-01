// This program finds numbers which are divisible by sum of their digits
//Harshad numbers

#include<stdio.h>
#include<math.h>

void hars(int x)
{
  int a,b,y;
  a=x/10;
  b=x%10;
  y=a+b;
  if(x%y==0)
    printf("\n%d",x);
}

main()
{
  int n1,n2,i;
  printf("Provide two 2-digit numbers.(smaller first): ");
  scanf("%d,%d",&n1,&n2);
  for (i=n1;i<=n2;i++)
      hars(i);
}
