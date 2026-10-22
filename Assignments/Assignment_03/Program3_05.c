/*

Accept on character from user and check whether that character is vowel 
(a,e,i,o,u) or not. 
Input : E Output : TRUE 
Input : d Output : FALSE

*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


int CheckVowel(char CValue)
{
    if((CValue == 'a' && 'A') || (CValue == 'e' && 'E') ||  (CValue == 'i' && 'I') || (CValue == 'o' && 'O') || (CValue == 'u' && 'U') )
    {
        return TRUE ;
    } 
    else
    {
        return FALSE ;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c" , &cValue);

    bRet = CheckVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }

    else
    {
        printf("It is Not Vowel");
    }

    return EXIT_SUCCESS;
}