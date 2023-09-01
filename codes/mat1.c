//needs rectification

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<MAKEMAT.C>

void matadd(float **a, int m, int n)
{
  int i,j;
  float **b,**c,x;
  printf("Enter the second matrix:");
  for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("\na[%d][%d]= ");
		scanf("%f",&x);
		b[i][j]=x;
	}
  printf("The sum of matrices A+B is:\n");  
  for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		c[i][j]=a[i][j]+b[i][j];
  matprint(c,m,n);
}


void matsub(float **a, int m, int n)
{
  int i,j;
  float **b,**c,x;
  printf("Enter the second matrix:");
  for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("\na[%d][%d]= ");
		scanf("%f",&x);
		b[i][j]=x;
	}
  printf("The difference of matrices A-B is:\n");  
  for(i=0;i<m;i++)
  	for(j=0;j<n;j++)
		c[i][j]=a[i][j]-b[i][j];
  matprint(c,m,n);
}


void matmult(float **a, int m, int n)
{
	int i,j,k,p;
  	float **b,**c,x;
	printf("Enter the number of columns for the second matrix:");
	scanf("%d",&p);
	printf("Enter the second matrix:");
  	for(i=0;i<n;i++)
		for(j=0;j<p;j++)
		{
			printf("\na[%d][%d]= ");
			scanf("%f",&x);
			b[i][j]=x;
		}
	for(i=0;i<m;i++)
		for(j=0;j<p;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	matprint(c,m,p);
}

void matprint(float **a, int m, int n)
{
  int i,j;
  for(i=0;i<m;i++)
	  {
	    printf("\n");
		for(j=0;j<n;j++)
		{
		  printf("%f\t",a[i][j]);
		}
	  }
}


void mattrace(float **a, int m, int n)
{
  float tr=0;int i;
  if(m==n)
    {
      for(i=0;i<m;i++)
	tr+=a[i][i];
      printf("The trace of the matrix is: %f\n",tr);
    }
  else
    printf("m!=n so trace not possible. \n");
  
}



main()
{
	float **a,x;
	int i,j,m,n,ch;
	printf("Enter the number of rows, columns: ");
	scanf("%f,%f",&m,&n);
	a=matalloc(m,n);

	//Enter matrix a
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
		  printf("\na[%d][%d]= ");
		  scanf("%f",&x);
		  a[i][j]=x;
		}

	printf("Enter your choice:\n");
	printf("\t1. Addition of matrices\n\t2.Subtraction of matrices\n\t3.Matrix multiplication\n\t4.Printing of matrices\n\t5.Finding trace of matrix\n\t6.Transferring elements of one matrix to another.");
	scanf("%d",&ch);
	switch(ch)
	  {
	  case 1:
	    matadd(a,m,n);
	    break;
	  case 2:
	    matsub(a,m,n);
	    break;
	  case 3:
	    matmult(a,m,n);
	    break;
	  case 4:
	    matprint(a,m,n);
	    break;
	  case 5:
	    mattrace(a,m,n);
	    break;
	  //case 6:
	    //mattransfer(a,m,n);
	  default:
	    printf("Invalid Input \n");
	  }
}
