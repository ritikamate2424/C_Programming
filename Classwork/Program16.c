#include "Header.h"
#include <assert.h> //used for assert macro which is used for debugging purpose.It is test enginee function.

int main()
{
    assert(Addition(10, 11)==21);

    assert(Addition(-10, 20)==10);

    assert(Addition(-10, -20)==-30);

    assert(Addition(10, 14)== 12);

    return EXIT_SUCCESS;
}