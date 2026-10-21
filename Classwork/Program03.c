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
    int iValue1=10, iValue2=11, iResult=0;    
    
    iResult=iValue1+iValue2;  //(Buisness Logic )Perform addition of iValue1 and iValue2 and store the result in iResult.
    
    printf("%d\n", iResult);
    
    return 0; //indicates the success to the os.
}
