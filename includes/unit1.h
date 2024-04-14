#ifndef UNIT1_H
#define UNIT1_H

// * --------------------
// * ARRAYS 
// Function to print the elements of an array
void printArray(const int *arr, const int size);

// Function to find the maximum element in an array
void findMax(const int *arr, int size);
// * ARRAYS
// * --------------------

// * --------------------
// * STRUCUTRES
struct Point
{
    int x;
    int y;
};

// Function to print the coordinates of a point
void printPoint(const Point &point);

// Function to calculate the distance between two points
double distance(const Point &p1, const Point &p2);
// * STRUCUTRES
// * --------------------

// * --------------------
// * STRUCUTRES AND ARRAYS
// Function to print the coordinates of an array of points
void printArrayOfPoints(const Point *points, const int size);
// * STRUCUTRES AND ARRAYS
// * --------------------

// * --------------------
// * FUNCTIONS
// Function to print the 3 parameters passed to it
void printWithDefaultParams(int a, int b = 10, int c = 20);
void valueAndReference(int a, int &b);
void overCharge(int a, int b, int c);
void overCharge(int a, int b);
void overCharge(float a);
// * FUNCTIONS
// * --------------------


#endif // UNIT1_H