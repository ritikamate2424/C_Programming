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

int main()
{
    int iValue1=0, iValue2=0, iResult=0;    //problem:garbage value is coming in iResult variable. Solution: we have to initialize the variable with 0.
    
    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter Second number:\n");
    scanf("%d", &iValue2);      

    iResult=iValue1+iValue2;  //(Buisness Logic )Perform addition of iValue1 and iValue2 and store the result in iResult.
    
    printf("Addition is : %d\n", iResult);
    
    return 0;
}
