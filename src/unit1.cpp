#include <unit1.h>
#include <iostream>
#include <cmath>

using namespace std;

// * ARRAYS 
void printArray(const int *arr, const int size)
{
    cout << endl << "--- printArray ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<< "---" << endl;
}

void findMax(const int *arr, int size)
{
    cout << endl << "--- findMax ---" << endl;
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
    cout << "Max element: " << maxElement<< endl;
    cout << "---" << endl;
}
// * ARRAYS
// * --------------------

// * STRUCUTRES
void printPoint(const Point &point)
{
    cout << endl << "--- printPoint ---" << endl;
    cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << endl;
    cout << "---" << endl;
}

double distance(const Point &p1, const Point &p2)
{
    cout << endl << "--- distance ---" << endl;
    double xDiff = p1.x - p2.x;
    double yDiff = p1.y - p2.y;
    double dist = sqrt(xDiff * xDiff + yDiff * yDiff);
    cout << "Distance between points: " << dist << endl;
    cout << "---" << endl;
    return dist;
}
// * STRUCUTRES
// * --------------------

// * STRUCUTRES AND ARRAYS
void printArrayOfPoints(const Point *points, const int size)
{
    cout << endl << "--- printArrayOfPoints ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")" << endl;
    }
    cout << "---" << endl;
}
// * STRUCUTRES AND ARRAYS
// * --------------------

// * FUNCTIONS
void printWithDefaultParams(int a, int b, int c)
{
    cout << endl << "--- printWithDefaultParams ---" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    cout << "---" << endl;
}

void valueAndReference(int a, int &b)
{
    cout << endl << "--- valueAndReference ---" << endl;
    cout << "value: " << a << ", reference: " << b << endl;
    a = 10;
    b = 20;
    cout << "changed to:\nvalue: " << a << ", reference: " << b << endl;
    cout << "---" << endl;
}

void overCharge(int a, int b, int c)
{
    cout << endl << "--- overCharge int ---" << endl;
    cout << "3 args / a: " << a << ", b: " << b << ", c: " << c << endl;
    cout << "---" << endl;
}

void overCharge(int a, int b)
{
    cout << endl << "--- overCharge int ---" << endl;
    cout << "2 args / a: " << a << ", b: " << b << endl;
    cout << "---" << endl;
}

void overCharge(float a)
{
    cout << endl << "--- overCharge float ---" << endl;
    cout << "1 args / a: " << a << endl;
    cout << "---" << endl;
}
// * FUNCTIONS
// * --------------------
