#include "Header.h"
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
//why we have not include header file in it:because we have not take input or output in it.but add it for no error .