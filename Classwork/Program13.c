#include <stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
//
//Function Name: Addition
//Input        : Integers, Integers
//Output       : Sum of the two integers
//Description  : performs addition of two integers.
//Date         : 04/01/2026 (if this function is updated on next datte then we have to update the date)
//Author       : Ritika Shankar Mate
//
////////////////////////////////////////////

//k&R style of writing the function.

int Addition(
            int iNo1,       //First input parameter which is going to accept first integer from user.
            int iNo2
            )  //(Buisness Logic )Perform addition of iValue1 and iValue2 and store the result in iResult.
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}

////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iResult=0;    //problem:garbage value is coming in iResult variable. Solution: we have to initialize the variable with 0.
    

    printf("Enter first number:\n");
    if(scanf("%d", &iValue1)!=1)
    {
        fprintf(stderr, "Unbale to proceed  as input is Invalid.\n");//stderr:if bad things happens print it on stderr
        
        return EXIT_FAILURE;
    }

    printf("Enter Second number:\n");
    if(scanf("%d", &iValue2)!=1)
    {
        fprintf(stderr, "Unbale to proceed  as input is Invalid.\n");//stderr:if bad things happens print it on stderr
        
        return EXIT_FAILURE;
    }

    iResult=Addition(iValue1, iValue2);  //(Buisness Logic )Perform addition of iValue1 and iValue2 and store the result in iResult.
    
    printf("Addition is : %d\n", iResult);
    
    return EXIT_SUCCESS;
}


////////////////////////////////////////////
// Step5:Test the Program.
//Tested test cases:
//-----------------------------------
//Input1  Input2  Output
//  10     11     21
// 11      0      11
//  0     11     11
// 20    -9     11
// -9     20     11
// -20   -11    -31
////////////////////////////////////////////

