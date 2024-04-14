#include <iostream>
#include <cstdlib>
#include <vector>
// UNIT 1
#include <unit1.h>

// UNIT 2

using namespace std;

int main()
{
  // * UNIT 1
  // ? ARRAYS
  int arr[] = {10, 11, 12, 23, 14, 15};
  cout << "sizeof(arr): " << sizeof(arr) / sizeof(int) << endl;
  printArray(arr, sizeof(arr) / sizeof(int));
  findMax(arr, sizeof(arr) / sizeof(int));

  // ? STRUCUTRES
  Point p1 = {1, 2}, p2 = {4, 6};
  printPoint(p1);
  printPoint(p2);
  distance(p1, p2);

  // ? STRUCUTRES AND ARRAYS
  Point points[] = {{x: 1, y: 2}, {4, 6}, {7, 8}};
  printArrayOfPoints(points, sizeof(points) / sizeof(Point));

  // ? FUNCTIONS
  printWithDefaultParams(1);

  // * UNIT 2


  return 0;
}