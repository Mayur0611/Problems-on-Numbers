/*
   5. Write program which accept number from user 
      and return difference between  summation of all its factors non factor.

*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;

    int iFactDiff = 0;
    
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
            
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iFactDiff = iSumFact - iSumNonFact;
    return iFactDiff;
  
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    

    return 0;
}
