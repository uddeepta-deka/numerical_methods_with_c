#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	return x+y;
}

main()
{
	FILE *fp1=NULL;
		fp1=fopen("odeprob1a.txt","w");
	FILE *fp2=NULL;
		fp2=fopen("odeprob1b.txt","w");
	FILE *fp3=NULL;
		fp3=fopen("odeprob1c.txt","w");
	float x=0.0,y=1.0,h=0.0001,x1;
	int i,n,j;
	float k1,k2,k3,k4,z;
	
	//Euler method
	do
	{
		y+=h*f(x,y);
		if(x>=1.0)
		{	
			j=(int)(x/0.1);x1=x-j*0.1;
			z=fabs(x1);
			if((z<=0.01)&&(z>=-0.01))
			{fprintf(fp1,"%f\t%f\n",x,y);}	
		}
		x+=h;		
	}while(x<=5.1);
	
	//RK4 method
	x=0.0;y=1.0;
	n=5.0/h;
	for(i=1;i<=n;++i)
	  {
	    k1=h*f(x,y);
	    k2=h*f(x+h/2,y+k1/2);
	    k3=h*f(x+h/2,y+k2/2);
	    k4=h*f(x+h,y+k3);
	    y+=(k1+2*k2+2*k3+k4)/6.0;
	    x+=h;
	    // if(x>=1.0)
	    //{	
	    //	j=(int)(x/0.1);x1=x-j*0.1;
	    //	z=fabs(x1);
			//if((z<=0.01)&&(z>=-0.01))
	    if((i%1000==0)&&(x>=1.0))
			{fprintf(fp2,"%f\t%f\n",x,y);}	
			//	}
	  }
	
	//Exact solution
	x=1.0;y=-2.0;
	while(x<=5.0)
	{
		y=-x-1.0+2.0*exp(x);
		x+=h;
		j=(int)(x/0.1);x1=x-j*0.1;
			z=fabs(x1);
			if((z<=0.01)&&(z>=-0.01))
			{fprintf(fp3,"%f\t%f\n",x,y);}	
	}
	
}

