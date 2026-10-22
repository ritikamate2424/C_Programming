#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if ( iValue >= 0 )
    {
        printf("The No. is Positive");
    }

    else
    {
        printf("The No. is Negative");
    }
}

int main()

{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",  &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;

}