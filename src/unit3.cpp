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

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> aux(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        aux[k++] = arr[i++];
    }
    while (j <= right) {
        aux[k++] = arr[j++];
    }

    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = aux[k];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// * RECURSIVE FUNCTIONS
// * --------------------
