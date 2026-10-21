#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2) //Business Logic is written in separate function -Logic is reusable
{
    if (iNo1>iNo2)
    {
         printf("Maximum number is %d\n", iNo1);
    }
    else
    {
         printf("Maximum number is %d\n",iNo2);
    }
}
int main()
{
    int iValue1=0, iValue2=0,iResult=0;

    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    Maximum(iValue1, iValue2); 
    // printf("Maximum number is %d\n", iResult);

    return EXIT_SUCCESS;
}