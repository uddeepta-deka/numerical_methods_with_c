//THis program generates a text file for data for plotting a circle

#include<stdio.h>
#include<math.h>

main()
{
	float x,y,x1,y1;
	FILE *fp=NULL;
	fp=fopen("circle.txt","w");
	for (x=-3.0;x<=3.0;x=x+0.001)
	{
		for(y=-3.0;y<=3.0;y=y+0.001)
		{
			if(((pow(x,2)+pow(y,2))<=9.001)&&((pow(x,2)+pow(y,2))>=8.999))
			{
				x1=x+5.0;y1=y+5.0;				
				fprintf(fp,"%f \t %f \n",x1,y1);
			}		
		}		
		
	}

	fclose(fp);
}
