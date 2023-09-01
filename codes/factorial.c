#include<stdio.h>
int fact(int x)
{
	if(x!=0)	
	return x*fact(x-1);
	else return 1;

}

main()
{
int n;
scanf("%d",&n);
printf ("%d",fact(n));
}
