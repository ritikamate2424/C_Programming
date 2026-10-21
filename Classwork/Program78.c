//Input :10
//1 3 5 7 9

#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
    int icnt=0;
    for(icnt=1; icnt<=iNo; icnt+=2)//Shorthhand assignement icnt+=2
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the frequency: ");
    scanf("%d" ,&iValue);

    Display(iValue);
    return EXIT_SUCCESS;

}

