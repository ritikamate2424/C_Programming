#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge=0;
    float fMarks=0.0f;

    printf("Enter your name:\n");
    scanf("%[^'\n']s",sName); //enter remains in input buffer after entering the name

    fflush(stdin); //flush the input buffer to remove the enter from the input buffer after entering the name. If you don't flush the input buffer then it will take enter as input and age will be 0. So, we have to flush the input buffer to avoid this problem.
    
    printf("Enter your age:\n");
    scanf("%d",&iAge);

    printf("Enter your marks:\n");
    scanf("%f",&fMarks);

    printf("Welcome : %s\n",sName);
    printf("Your age is : %d\n",iAge);
    printf("Your marks is : %f\n",fMarks);

    return EXIT_SUCCESS;
}