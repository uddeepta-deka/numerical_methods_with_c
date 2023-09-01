//This program generates a finite series sum whose nth term is x^i/i!

#include<stdio.h>

main()
{
	int n,i,N;
	float x,sum=1.0,t=1.0;
	FILE *fp=NULL;
	printf("Enter the value of x:\t");
	scanf("%f",&x);
	printf("Enter the value of N (integer) :\t");
	scanf("%d",&N);
	fp= fopen("finite_series1.txt","w");
	for(n=1;n<=N;n++)	
	{
		for(i=1;i<n;i++)
		{
			t*=x/i;
			sum+=t;
		}
		fprintf(fp,"%d \t %f \n",n,sum);
	}
}
