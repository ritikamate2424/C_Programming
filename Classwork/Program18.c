#include<stdio.h>
#include<stdlib.h>


void CheckEven(int iNo)
{
    if((iNo % 2)==0)
    {
        printf("%d is even number\n",iNo);
    }
    else
    {
        printf("%d is odd number\n",iNo);

    }
}

int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    CheckEven(iValue);

    return EXIT_SUCCESS; //indicates the success to the os.In previous we write return 0

}
