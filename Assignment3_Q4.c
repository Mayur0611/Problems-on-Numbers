/*
  4. Accept one Character from user and convert case of that character:
*/

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue == 'a' )
    {
        printf("%s","A");

    }
    else if(cValue == 'D')
    {
        printf("%s","d");
    
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
}