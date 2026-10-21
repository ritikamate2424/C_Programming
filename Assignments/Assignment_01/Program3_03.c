#include <stdio.h>

void Display()
{
    int iNo = 0;
    iNo = 5;

    while (iNo >= 1)
    {
        printf("%d\n", iNo);
        iNo--;
    }
}

int main()
{
    Display();

    return 0;

}