#include <iostream>
#include <cstdlib>
#include <vector>
// UNIT 1
#include <arrays.h>

// UNIT 2

using namespace std;

int main()
{
  int arr[] = {10, 11, 12, 23, 14, 15};
  cout << "sizeof(arr): " << sizeof(arr) << endl;
  printArray(arr, sizeof(arr) / sizeof(int));

  findMax(arr, sizeof(arr) / sizeof(int));

  return 0;
}