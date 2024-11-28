/*
  3. Write Program which accept distance in Kilometer convert it into meter
     (1 Kilometer = 1000 meter)
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
  int iToMeter = 0;

  iToMeter = iNo * 1000;
  return iToMeter;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter distance: ");
  scanf("%d",&iValue);

  iRet = KMtoMeter(iValue);

  printf("The %d Km is %d meter ",iValue,iRet);

  return 0;
  
}