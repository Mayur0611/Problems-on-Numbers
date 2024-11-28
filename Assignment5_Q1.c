/*
1. Write aprogram which accept number from user
 and print that number of $ & * on Screen:


*/

# include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
       printf("$ ");

     
       printf("* ");
    }
}


int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

// Time coplexcity is = O(iNo)  or O(iValue)