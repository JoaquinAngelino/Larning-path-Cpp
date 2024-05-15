#include <unit3.h>
#include <iostream>
#include <vector>

using namespace std;

// * RECURSIVE FUNCTIONS
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return factorial(n - 1) * n;
}

void reversePrint(const char* c) {
    if (*c == '\0') {
        return;
    }

    reversePrint(c + 1);
    putchar(*c);
    // cout << *c;

    return;
}

void mergeSort(vector<int> * arr, int left, int right){
    
}
// * RECURSIVE FUNCTIONS
// * --------------------
