#include<stdio.h>
#include<math.h>

main()
{
	float c=0.35503;	
	float z,t,s;int n;
	FILE *fp=NULL;
	fp=fopen("serprob6.txt","w");
	for(z=-10.0;z<=0.0;z+=0.05)
	{
		t=1.0;s=t;n=0;		
		do
		{
			t*=pow(z,3)/((3.0*n+3.0)*(3.0*n+2.0));			
			s+=t;
			n++;

		}while(fabs(t/s)>0.0001);
		fprintf(fp,"%f\t%f\n",z,c*s);
	}	
	fclose(fp);
}

