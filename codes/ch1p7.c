
#include<stdio.h>
#include<math.h>

int fact(int x)
{
	if(x!=0)	
	return x*fact(x-1);
	else return 1;

}

long c(int n,int r)
{
	long res;
	res=fact(n)/(fact(n-r)*fact(r));
	return res;
}

long p(int n,int r)
{
	long res;
	res=fact(n)/fact(n-r);
	return res;
}

main()
{
	int n,r,ch;long res;
	printf("Enter n,r: ");
	scanf("%d,%d",&n,&r);
	printf("Enter '1' for combination and '2' for permutation:");
	scanf("%d\n",&ch);
	if(n>r)
	{
		switch (ch)
		{
			case 1 :
				res=c(n,r);
				printf("%dC%d is %ld\n",n,r,res);				
				break;
			case 2 :
				res=p(n,r);
				printf("%dP%d is %ld\n",n,r,res);				
				break;
			default:	
				printf("Invalid input!!!\n");
				break;
		}	
	}
}
