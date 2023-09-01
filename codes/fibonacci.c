//This program generates fibonacci numbers

#include<stdio.h>

main()
{
  int a=0,b=1,x,temp;
  printf("Enter a number\n");
  scanf("%d\n",&x);
  do
    {
      temp = b; 
      printf("\n%d",b);
      b+=a;
      a=temp;
    }while (b<=x);
}
