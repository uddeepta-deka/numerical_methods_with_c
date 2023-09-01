#include<stdio.h>
#include<math.h>

main()
{
	FILE *fp=NULL;
	fp=fopen("serprob5b.txt","w");
	float pi,t,s,z;
	int i,iter;
	pi=4.0*atan(1.0);
	for(z=0.0;z<=5.0;z+=0.01)
	{
		t=1.0/(2.0*sqrt(pi));s=t;i=0;iter=0;
		do
		{
			t*=(4.0*z*z*(0.5-(i/2.0)))/((i+1.0)*(i+2.0));
			s+=t;
			i+=2;
			iter++;
		}while(fabs(t/s)>0.0001);
		fprintf(fp,"%f\t%f\t%d\n",z,s,iter);
	}
}
