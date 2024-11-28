/*
  2. Accept amount in US doller return its corresponding
     value in indian currency.( Consider 1$ as 70 Rs.)

*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDoller = 0;

    iDoller = iNo * 70;
    return iDoller;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is: %d",iRet);

    return 0;
}