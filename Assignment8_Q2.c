/*
  1. Write a Program which accept width & height of rectangle from user and
     calculate its area(Area =Width * Height)
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
  double dRectArea = 0.0;

  dRectArea = fWidth * fHeight;
  return dRectArea;
}


int main()
{
  float fValue1 = 0.0, fValue2 = 0.0;
  double dRet = 0.0;

  printf("Enter Width: ");
  scanf("%f",&fValue1);

  printf("Enter Height: ");
  scanf("%f",&fValue2);

  dRet = RectArea(fValue1,fValue2);

  printf("Area of Rectangle is: %lf ",dRet);

  return 0;
}