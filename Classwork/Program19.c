#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;
-
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);

    }
    
    return EXIT_SUCCESS; //indicates the success to the os.In previous we write return 0

}
