/*

 Accept one character from user and convert case of that character. 
Input : a Output : A 
Input : D Output : d

*/

#include <stdio.h>
#include <stdlib.h>
// #include <ctype.h>


// Method 1:

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z') //Using character arithmetic
    {
        printf("%c", CValue - ( 'a' - 'A'));
    } 
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + ('a' - 'A' ));
    }
}


///Method  2

// void DisplayConvert(char CValue)
// {
//     if(islower(CValue)) // Checking using Buit-in function  islower() , isupper()
//     {
//         printf("%c",toupper(CValue)); //Converting using buit in function tolower() , toupper()
//     } 
//     else if(isupper(CValue))
//     {
//         printf("%c",tolower(CValue));
//     }
// }

int main()
{
    char cValue = '\0' ;

    printf(" Enter the Character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;

}