/*
   3. Write a program which accept range from user and return 
    addition of all numbers display all Even numbers in between
    that range.(Range should contains positive numbers only)
*/



#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAdd = 0;
        
    
    for(iCnt = iStart ;iCnt <= iEnd; iCnt++)
    {
        if(iCnt < 0)
        {
            printf("Invalid Range");
            break;  
        }
        else
        {
            iAdd = iAdd + iCnt;
        }      
    }
    return iAdd;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    printf("Addition is %d",iRet);

    return 0;
}
