/*
   5. Accept one charactor from user and check whether that charactor os vowel or not:
*/


#include<stdio.h>

typedef int BOOL;

#define TRUE 1 
#define FALSE 0

int ChkVowel(char cValue)
{
    if(cValue == 'a' ||cValue == 'A' ||cValue == 'e' ||cValue == 'E' ||cValue == 'i' ||cValue == 'I' ||cValue == 'o' ||cValue == 'O' ||cValue == 'u' ||cValue == 'U' )
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else 
    {
        printf("It is not Vowel");
    }

    return 0;
}