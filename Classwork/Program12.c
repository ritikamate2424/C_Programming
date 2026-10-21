#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no=0;

    printf("Enter the number:\n");
    if(scanf("%d", &no) !=1)
    {
        fprintf(stderr, "Invalid input.\n");

        return EXIT_FAILURE;
    }

    printf("Input is valid.\n");

    return EXIT_SUCCESS; 
}

//device type:standard input-keyboard,standard output console,standard error console