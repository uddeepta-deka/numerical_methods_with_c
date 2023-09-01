/*This program gives an introduction to pointers*/

#include<stdio.h>

main()
{
  int x; //Normal integer
  int *p; //Pointer

  p=&x; // Assigning address of x to p
  x=107;
  printf("The value of x is: %d\n",*p);
}
