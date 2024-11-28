/*
   4. Write program which accept number from user 
      and return summation of all its non factor.

*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int Sum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            Sum = Sum + iCnt;
        }
    }
    return Sum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);
    

    return 0;
}
