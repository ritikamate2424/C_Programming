#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret=0;
    int no=0;

    printf("Enter the number:\n");
    ret=scanf("%d",&no); 

    printf("Return value of scanf is : %d\n",ret);
    return EXIT_FAILURE; //indicates the failure to the os.In previous we write return 0
}