#include<stdio.h>
#include<math.h>

main()
{
  FILE *fp=NULL;
  fp=fopen("prac.txt","w");
  int n;
  float x,t,s,acc=0.0001,xinc=0.01;
  for(x=0.1;x<=1.0;x+=xinc)
    {
      t=1.0;s=t;n=1;
      do
	{
	  t*=x*x*(n+1.0)/(2.0*n*n);
	  s+=t;
	  n++;
	}while(fabs(t/s)>acc);
      s=s*exp(-pow(x,2)/2.0)*x*x/2.0;
      fprintf(fp,"%f\t%f\n",x,s);
    }
  
}
