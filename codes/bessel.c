//This program generates data for the Bessel's functions

#include<stdio.h>
#include<math.h>

main()
{
	float z,j0,j1,j2,pi;
	FILE *fp=NULL;
	pi=4.0*atan(1.0);
	fp=fopen("bessel.txt","w");
	for (z=0.0001;z<=4.0*pi;z=z+0.0001)
	{
		j0=sin(z)/z;
		j1=(sin(z)/pow(z,2.0))-(cos(z)/z);
		j2=(3.0*j1/z)-j0;
		fprintf(fp,"%f \t %f \t %f \t %f \n",z,j0,j1,j2);
	}
	fclose(fp);
}
