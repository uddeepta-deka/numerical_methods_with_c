/*This program finds the number of primes under n*/

#include<stdio.h>
#include<math.h>

int prime(int x)  // This function checks whether a given number is prime or not
{
  int i,a,check=1;
  a=sqrt(x);
  for (i=3;i<=a;i++)
  {
   if (x%i==0)
     check=0;
  }
  return check;
}


main()
{
  int n,j,flag=0,count=1;
  printf("Enter a number greater than/= 3: ");
  scanf("\n %d",&n);
  if(n>=3)
  {

    for (j=3;j<=n;j+=2)
    {
     flag=prime(j);
     if(flag==1)
       count+=1;
    }
    printf("\nThe number of primes is : %d ",count);

  }
  else
   printf("Invalid input!");
}
