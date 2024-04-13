#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>

// Function to print the elements of an array
void printArray(const int arr[], const int size)
{
    std::cout << "\n--- printArray start ---" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n--- printArray done ---\n" << std::endl;
}

// Function to find the maximum element in an array
void findMax(const int *arr, int size)
{
    std::cout << "--- findMax start ---" << std::endl;
    if (size == 0)
        return;
    int maxElement = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    std::cout << "Max element: " << maxElement;
    std::cout << "\n --- findMax done ---\n" << std::endl;
}

#endif // ARRAYS_H