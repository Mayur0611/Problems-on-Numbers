/*
    3. Write program whic accept number from user and print even factors of that numbers:

*/

#include<stdio.h>

void displayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;

    }

    for(i = 1 ; i <= iNo; i++)
    {
        if( iNo % i == 0 && i % 2 == 0 )
        {
            printf("%d",i);
            printf(" ");

        }
    }
}


int main()
{

    int iValue =0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    displayFactor(iValue);

    return 0;
}