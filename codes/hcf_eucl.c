/*This program finds the HCF of numbers by Euclid's algorithm*/

#include<stdio.h>

int euclhcf(int x, int y)
{
  if (y==0)
  {
    return x;

  }
  else if (x>=y && y>0)
  {
    return euclhcf(y,(x%y));
  }
}

main()
{
 int n1,n2,hcf;
 
 printf("Enter two numbers for HCF:\n");
 scanf("%d,%d",&n1,&n2);
 hcf = euclhcf(n1,n2);
 
 if (hcf!=0)
   printf("The HCF of %d and %d is %d\n", n1,n2,hcf);
 else 
  printf ("\n The input is invalid\n");

}
