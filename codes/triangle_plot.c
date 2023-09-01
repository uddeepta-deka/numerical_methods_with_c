// This program generates data for triangle plot in gnuplot

#include<stdio.h>
#include<math.h>

main()
{
  
  float x,y1,y2,x1;
  FILE *fp=NULL;
  fp=fopen("triangle.txt","w");
  for (x=0.0;x<=4.0;x=x+0.001)
    {
      y1=(3.0/4.0)*x;
      y2=0;
      x1=4;
      fprintf(fp,"%f \t %f \t %f \t %f \n",x,x1,y1,y2);
    }
  
  fclose(fp);
}
