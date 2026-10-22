/*

Check Even or Odd Number
Problem Statement: Accept an integer from the user and determine whether it is even or odd. An even 
number is completely divisible by 2.

Expected Output:
* Input: 24 → Even Number
* Input: 17 → Odd Number

*/

#include <stdio.h>
#include <stdlib.h>

void  CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("The no. is EVEN....\n"); //Even Number
    }
    else
    {
        printf("The no. is ODD....\n"); //Odd Number
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d" , &iValue);
 
    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}