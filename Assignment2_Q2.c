
// 2 . Accept one number from user and print that number of * on screen:

#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;

    }

    while(iNo > 0)
    {
        printf("*");
        iNo--;

    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%lu",&iValue);

    Display(iValue);

    return 0;
}

/*
TESTING:

Enter number 2
**

Enter number -1
*


Enter number 3
***
*/