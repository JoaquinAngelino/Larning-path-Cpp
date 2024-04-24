#include <unit3.h>
#include <iostream>

using namespace std;

// * RECURSIVE FUNCTIONS
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return factorial(n-1) * n;
}
// * RECURSIVE FUNCTIONS
// * --------------------
