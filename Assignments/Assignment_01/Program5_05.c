//Accept one number from user and print that numbetr of * on screen.s

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}