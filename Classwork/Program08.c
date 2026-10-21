/*Multi-Line comment.

Step1:Understand the problem statement and requirements.
Step2:Write the algorithm.
Step3:Decide the language.
Step4:Write the program.
Step5:Test the Program.
*/

////////////////////////////////////////////
//
//Step1:Understand the problem statement and requirements.
//      User is going to enter any 2 intergers.
//      And we have to perform addition
//
////////////////////////////////////////////

////////////////////////////////////////////
// Step2: Write the algorithm.
/*
START
    Accept first no as No.1
    Accept first no as No.2
    Create the variable as Ans to store the result
    Perform addition of No.1 and No.2
    Display resultfrom Ans
END
*/
////////////////////////////////////////////

////////////////////////////////////////////
//
//Step3: Decide the language.
//         We select C programming.
////////////////////////////////////////////

////////////////////////////////////////////
//
//Step4:Write the program.
//
////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>  //for EXIT_SUCCESS macro

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
//Make sure that create the variabke which will useful .Don't create variable which have not used.
int Addition(
            int iNo1,       //First input parameter which is going to accept first integer from user.
            int iNo2        //second input parameter which is going to accept second integer from user.
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
    scanf("%d", &iValue1);

    printf("Enter Second number:\n");
    scanf("%d", &iValue2);

    iResult=Addition(iValue1, iValue2);  //(Buisness Logic )Perform addition of iValue1 and iValue2 and store the result in iResult.
    
    printf("Addition is : %d\n", iResult);
    
    return EXIT_SUCCESS; //indicates the success to the os.In previous we write return 0
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

//function,method,api,procedure,subroutine,subprogram,subroutine,subprogram //name according thee language.