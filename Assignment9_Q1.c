/*
  1. Write a Program which accept redius of circle from user
     and aclculate its area:
     Consider value po PI as 3.14(Area = PI * Radius)
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
  double dCircleArea = 0.0;
  float PI = 3.14;

  dCircleArea = PI * fRadius * fRadius;
  return dCircleArea;
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter Radius ");
  scanf("%f",&fValue);

  dRet = CircleArea(fValue);

  printf("Area of circle is : %lf",dRet);

  return 0;
}