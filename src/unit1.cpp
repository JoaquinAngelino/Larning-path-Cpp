#include <unit1.h>
#include <iostream>
#include <cmath>

using namespace std;

// * ARRAYS 
void printArray(const int *arr, const int size)
{
    cout << "\n--- printArray ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n---\n" << endl;
}

void findMax(const int *arr, int size)
{
    cout << "--- findMax ---" << endl;
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
    cout << "Max element: " << maxElement;
    cout << "\n---\n" << endl;
}
// * ARRAYS
// * --------------------

// * STRUCUTRES
void printPoint(const Point &point)
{
    cout << "\n--- printPoint ---" << endl;
    cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << endl;
    cout << "---\n" << endl;
}

double distance(const Point &p1, const Point &p2)
{
    cout << "--- distance ---" << endl;
    double xDiff = p1.x - p2.x;
    double yDiff = p1.y - p2.y;
    double dist = sqrt(xDiff * xDiff + yDiff * yDiff);
    cout << "Distance between points: " << dist << endl;
    cout << "---\n" << endl;
    return dist;
}
// * STRUCUTRES
// * --------------------

// * STRUCUTRES AND ARRAYS
void printArrayOfPoints(const Point *points, const int size)
{
    cout << "\n--- printArrayOfPoints ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")" << endl;
    }
    cout << "---\n" << endl;
}
// * STRUCUTRES AND ARRAYS
// * --------------------

// * FUNCTIONS
void printWithDefaultParams(int a, int b, int c)
{
    cout << "\n--- printWithDefaultParams ---" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    cout << "---\n" << endl;
}
// * FUNCTIONS
// * --------------------
