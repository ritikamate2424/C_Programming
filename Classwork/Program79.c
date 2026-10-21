//Input :5
//1+2+3+4+5=15

#include<stdio.h>
#include<stdlib.h>


int main()
{

    int icnt=0;
    int iSum=0;

    icnt=1;
 
    //iSum=0+1 ->1
    iSum=iSum+icnt;
    icnt++; //2

    ////iSum=1+2 ->3
    iSum=iSum+icnt;
    icnt++; //3

    //iSum=3+3 ->6
    iSum=iSum+icnt;
    icnt++; //4

    //iSum=6+4 ->10
    iSum=iSum+icnt;
    icnt++; //5

    printf("%d\n",iSum); //10

    return EXIT_SUCCESS;

}

