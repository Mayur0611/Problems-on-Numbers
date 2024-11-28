/*
  5. Write Program which accept area in square feet and convert it into square meter:
     (1 square feet = 0.0929 square meter)
*/

#include<stdio.h>

double SquareMeter(int iSqmeter)
{
  double dSqMeter = 0.0;

  dSqMeter = iSqmeter * 0.0929;
  return dSqMeter;
}


int main()
{
  int iValue = 0;
  double dRet = 0.0;

  printf("Enter Area in Square feet: ");
  scanf("%d",&iValue);

  dRet = SquareMeter(iValue);

  printf("%d Square feet = %lf Square meter",iValue,dRet);

  return 0;
}