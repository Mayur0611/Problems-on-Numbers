/*
   4. Accept two numbers from user and display first number in second number of time:

*/

# include<stdio.h>

void Display(int iNo , int iFrequency)
{
    if( iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ",iNo);
        printf(" ");

    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number");
    scanf("%d",&iValue1);

    printf("Enter frequency");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);


    return 0;
}