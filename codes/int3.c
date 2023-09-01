#include<stdio.h>
#include<math.h>

float f(float r, float E)
{
	float res;
	res=1.0/(r*r*(pow(2.0*E+(2.0/r)-(1.0/(r*r)),0.5)));
	return res;
}

main()
{
	float E,c,d,z,z1,x[20],w[20],a,b,s,r,u,v;
	int i,n=6;
	FILE *fp=NULL;
	fp=fopen("int3.txt","w");
	printf("Enter the value of E: ");
	scanf("%f",&E);
	#include<GAUSS.C>
	if(E!=0)
	{
		a=(-1.0+pow(1.0+2.0*E,0.5))/(2.0*E);
		b=(-1.0-pow(1.0+2.0*E,0.5))/(2.0*E);
	
		for(r=a;r<=b;r+=0.01)
		{	
			c=0.5*(r+a);d=0.5*(r-a);
			s=0.0;
			for(i=0;i<=n/2-1;i++)
			{
				z=c+d*x[i];
				z1=c-d*x[i];
				s+=w[i]*(f(z,E)+f(z1,E));
			}	
			s*=d;
			u=r*cos(s);
			v=r*sin(s);
			fprintf(fp,"%f\t%f\t%f\n",u,v,-v);
		}
	}
	else
	{
		a=0.51; b=5.0;
		for(r=a+0.01;r<b;r+=0.01)
		{
			c=0.5*(r+a);d=0.5*(r-a);
			s=0.0;
			for(i=0;i<=n/2-1;i++)
			{
				z=c+d*x[i];
				z1=c-d*x[i];
				s+=w[i]*(f(z,E)+f(z1,E));
			}	
			s*=d;
			u=r*cos(s);
			v=r*sin(s);
			fprintf(fp,"%f\t%f\t%f\n",u,v,-v);
		}
	}
	printf("r0= %f\nrm= %f\n",a,b);
	fclose(fp);
}
