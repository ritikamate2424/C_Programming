#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    if((iValue % 2)==0)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);

    }

    return EXIT_SUCCESS; //indicates the success to the os.In previous we write return 0

}
