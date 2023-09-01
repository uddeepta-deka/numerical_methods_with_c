/* Program evaluating a function and storing the results in two data files*/

#include<stdio.h>
#include<math.h>

main()
{
  float x,y,z;
  FILE *fp=NULL;
  FILE *fp1=NULL;
  
  fp = fopen("data1.txt","w"); //open a file handle in write mode
  fp1 = fopen("data2.txt","w"); 
  for (x=0;x<=6;x+=0.1)
    {
      y=sin(x);
      z=cos(x);
      fprintf(fp, "%f \t %f \n",x,y); //print line to the file
      fprintf(fp1, "%f\t %f\n",x,z);
    }
  fclose (fp); // Close the file handle
  fclose (fp1);
}
