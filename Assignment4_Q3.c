/*
   3. Write program which accept number from user 
      and display all  non factors .

*/

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d",iCnt);
            printf(" ")
        }
    }
}


int main()
{
    int iValue = 0;
    

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}