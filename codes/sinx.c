/*This program finds the sin of an angle*/

#include<stdio.h>
#include<math.h>

main()
{
  float x,y;
  printf("Supply the value of the angle in radians\n");
  scanf("%f",&x);
  y=sin(x);
  printf("%f, %f\n", x,y);

}
