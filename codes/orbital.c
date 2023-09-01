//Orbital wave functions

#include<stdio.h>
#include<math.h>

main()
{
	FILE *fp = NULL;
	float x,y,i,pi,th; 	
	pi=4.0*atan(1.0);
	fp=fopen("orbital.txt","w");
	for (i=0.0;i<=2*pi;i=i+0.0001)
	{
		th=(sqrt(42)/8)*sin(i)*((pow(cos(i),2)*5)-1);
		x=pow(th,2)*cos(i);
		y=pow(th,2)*sin(i);
		fprintf(fp,"%f \t %f \n",x,y);		
	}
	
	fclose(fp);
}
