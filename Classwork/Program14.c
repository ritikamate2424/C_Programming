#include "Header.h"

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


