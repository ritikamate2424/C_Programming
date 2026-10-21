#include <stdio.h>
#include <stdlib.h>

void Display(int iNo, int iFrequency)
{
    iFrequency  = 0;
    iNo = 0;
     
    for(iFrequency = 1 ; iFrequency >=0 ; iFrequency++)
    {
        printf("%d", iNo * iFrequency);
    }
}

int main()
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter number :");
    scanf("%d" , &iValue);
    
    printf("Enter frequency : ");
    scanf("%d" , &iCount);

    Display(iValue , iCount);

    return EXIT_SUCCESS;
}
