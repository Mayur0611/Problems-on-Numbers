/*
  1. Write program which Accept number from user and display
     below pattern:

*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("* ");
        }
        else
        {
            if(iCnt > iNo)
            {
                printf("# ");
            }    
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexcity = O(iValue * 2)