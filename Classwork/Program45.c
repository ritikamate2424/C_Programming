// ACCEPT TWO NUMBERS AND WRITTEN ITS AVERAGE USING FUNCTION IN C LANGUAGE

#include<stdio.h>
#include<stdlib.h>

int Average(int iNo1, int iNo2) 
{
    float fAns=0.0f;
    //Tyepe casting is done to avoid the loss of data because if we don't do type casting then it will take the average as integer and it will not give the correct answer. So, we have to do type casting to avoid this problem.
    fAns=((float)iNo1+(float)iNo2)/2; 
    return fAns;
}

int main()
{
    int iValue1=0, iValue2=0;
    float fResult=0.0f;

    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    fResult=Average(iValue1, iValue2); 
    printf("Average is %f\n", fResult);

    return EXIT_SUCCESS;
}