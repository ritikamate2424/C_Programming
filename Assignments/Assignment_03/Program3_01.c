#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{
    int  iCnt = 1 ;
    
    if(iNo <= 0)
    {
        return ;
    }

    // while(iCnt <= iNo)
    // {
    //     if (iValue % 2 == 0)
    //     {
    //         printf("%d ", iValue);
    //         iCnt++ ;
    //     }

    //     iValue++;
    // }
    
    for( int iValue = 1 ; iCnt <= iNo ; iValue++)
    {
        if (iValue % 2 == 0)
        {
            printf("%d ", iValue);
            iCnt++ ;
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;

}