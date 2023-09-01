//This program checks whether a number is palindrome or not

#include<stdio.h>

main()
{
  int n, rev =0, tem;
  printf("Enter the number to check if it is a palindrome\n");
  scanf("%d",&n);
  
  tem = n;
  while(tem!=0) 
    {
      rev = rev * 10;
      rev = rev+tem%10;
      tem=tem/10;
    }
  if(n==rev)
    printf("%d is a palindrome number.\n",n);
  else
    printf("%d is not a palindrome number. \n",n);

}
