//Bifurcation function

#include<stdio.h>
#include<math.h>

main()
{
        float al,x0,x;
	int n;
	FILE *fp=NULL;
	fp=fopen("odeprob6.txt","w");
	printf("Enter x0:");
	scanf("%f",&x0);
	if((x0>0.0)&&(x0<1.0)&&(x0!=0.5))
	{
		for(al=0.0;al<=4.0;al+=0.05)
		{
		  x=x0;
		  for(n=0;n<=10100;n++)
			{
			  x=al*x*(1.0-x);
			  if(n>10000)
			      fprintf(fp,"%f\t%f\n",al,x);
			 		  
			}
		}
	}
	else printf("Invalid x0!!!\n");
}		
