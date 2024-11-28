/* 
   5. Write program which returns difference between Even factorial and 
      Odd factorial:
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1; 
    int iFactDiff = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if( iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            if(iCnt % 2 != 0)
            {
                iOddFact = iOddFact * iCnt;
            }
        }           
    }

    iFactDiff = iEvenFact - iOddFact;
    return iFactDiff;  
   
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}

//Time Complexcity is :  O(iValue) 