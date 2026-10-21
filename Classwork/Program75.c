//Input :4
//1 2 3 4

#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
    int icnt=0;
    for(icnt=iNo;icnt>=1;icnt--)
    {
        printf("%d\n",icnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter the frequency: ");
    scanf("%d" ,&iValue);

    Display(iValue);
    return EXIT_SUCCESS;

}

// add updator and filter 