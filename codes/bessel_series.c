//This program finds bessel function for n=0,1,2

#include<stdio.h>
#include<math.h>

int fact(int x)
{
	if(x!=0)	
	return x*fact(x-1);
	else return 1;
}

main()
{
	FILE *fp1=NULL;
	FILE *fp2=NULL;
	FILE *fp3=NULL;
	fp1=fopen("bessel_series1.txt","w");
	fp2=fopen("bessel_series2.txt","w");
	fp3=fopen("bessel_series3.txt","w");
	float x,t,s,acc=0.0001;
	int n,k;
	for(n=0;n<=2;n++)
	{
		for(x=0.0;x<=10.0;x+=0.001)
		{
			k=0;t=(float)1.0/fact(n);
			s=t;			
			do
			{
				t*=(-x*x)/(4.0*(k+1.0)*(n+k+1.0));
				s+=t;
				k+=1;
			}while(fabs(t/s)>acc);
			s*=pow((x/2.0),n);
			switch (n)
			{
				case (0):
					fprintf(fp1,"%f\t%f\n",x,s);
					break;
				case (1):
					fprintf(fp2,"%f\t%f\n",x,s);
					break;
				case (2):
					fprintf(fp3,"%f\t%f\n",x,s);
					break;
			}
		}
	}

}
