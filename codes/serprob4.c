//This program finds the series expansion of F(z)

#include<stdio.h>
#include<math.h>

main()
{
	FILE *fp= NULL;	
	fp=fopen("serprob4.txt","w");
	float pi,z,t,sum;
	int n;
	pi=4.0*atan(1.0);
	for(z=0.0;z<=1.0;z+=0.1)
	{
		t=cos(pi*z*z/2)*z;
		n=1;
		sum=t;
		do
		{
			t*=-pi*pi*pow(z,4)/((4.0*n)+5.0);
			sum+=t;
			n+=1;
		}while(fabs(t/sum)>0.0001);
		fprintf(fp,"%f\t%f\n",z,sum);
	}
	fclose(fp);
}
