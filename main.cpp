#include <iostream>
#include <cstdlib>
#include <vector>
// -----
#include <unit1.h>
#include <unit2.h>

void unitOneImplementation();
void unitTwoImplementation();

using namespace std;

int main()
{
  // * UNIT 1
  // unitOneImplementation();
  // unitOneExercises();

  // * UNIT 2
  unitTwoImplementation();
  // unitTwoExercises();

  return 0;
}

void unitOneImplementation()
{
  // ? ARRAYS
  int arr[] = {10, 11, 12, 23, 14, 15};
  const int size = sizeof(arr) / sizeof(int);
  cout << "sizeof(arr): " << size << endl;
  printArray(arr, size);
  findMax(arr, size);

  // ? STRUCUTRES
  Point p1 = {1, 2}, p2 = {4, 6};
  printPoint(p1);
  printPoint(p2);
  distance(p1, p2);

  // ? STRUCUTRES AND ARRAYS
  Point points[] = {{x : 1, y : 2}, {4, 6}, {7, 8}};
  printArrayOfPoints(points, sizeof(points) / sizeof(Point));

  // ? FUNCTIONS
  printWithDefaultParams(1);

  int value = 1, reference = 2;
  valueAndReference(value, reference);
  cout << "value: " << value << ", reference: " << reference << endl;

  overCharge(1, 2, 3);
  overCharge(1, 2);
  overCharge(1.4);
}

void unitTwoImplementation()
{
  // ? POINTERS
  referenceAndPointer();

  // ? POINTERS TO ARRAYS AND STRUCTS
  printArrayOfStructs();

  //? POINTERS TO FUNCTIONS
  execFunctionWithPtr();

}