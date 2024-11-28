/* 
   5.    4. Write program which accept number from user and display 
      its table in reverse format:
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt >= 1; iCnt--)
    {
        printf("%d \n", iNo * iCnt);  
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}


// time complexity =  O(10) 