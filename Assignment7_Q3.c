/* 
   3. Write program to find Even factorial of given number:
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if( iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
        
    }
    return iFact;
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}

//Time Complexcity is :  O(iValue) 