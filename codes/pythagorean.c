/*This program finds all sets of numbers till hundred which satisfy a2+b2=c2*/

#include<stdio.h>
#include<math.h>

main()
{
  int i,j,k;
  for(i=2;i<=100;i++)
    {for(j=1;j<i;j++)
	{for(k=1;k<=j;k++)
	  {
	    if((j*j)+(k*k)==(i*i))
	      printf("%d %d %d\n",k,j,i);
	  }
	}
    }
}
