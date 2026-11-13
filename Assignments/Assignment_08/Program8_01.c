/*

Write a program which accept number from user and print that number of $ & * 
on screen. 
Input : 5 
Output : $ * $ * $ * $ * $ * 
Input : 3 
Output : $ * $ * $ * 
Input : -3 
Output : $ * $ * $ * 

*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCnt  = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t",iCnt);
        }
    }
}
int main() 
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    return EXIT_SUCCESS;
}