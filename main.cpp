#include <iostream>
#include <cstdlib>
#include <vector>
// -----
#include <unit1.h>
#include <unit2.h>
#include <unit3.h>
#include <unit4n5.h>

void unitOneImplementation();
void unitTwoImplementation();
void unitThreeImplementation();
void unitFourImplementation();

using namespace std;

int main()
{
  // * UNIT 1
  // unitOneImplementation();
  // unitOneExercises();

  // * UNIT 2
  // unitTwoImplementation();
  // unitTwoExercises();

  // * UNIT 3
  // unitThreeImplementation();
  // unitThreeExercises();

  // * UNIT 4
  unitFourImplementation();

  return 0;
}

void unitOneImplementation() {
  // ? ARRAYS
  int arr[] = { 10, 11, 12, 23, 14, 15 };
  const int size = sizeof(arr) / sizeof(int);
  cout << "sizeof(arr): " << size << endl;
  printArray(arr, size);
  findMax(arr, size);

  // ? STRUCUTRES
  Point p1 = { 1, 2 }, p2 = { 4, 6 };
  printPoint(p1);
  printPoint(p2);
  distance(p1, p2);

  // ? STRUCUTRES AND ARRAYS
  Point points[] = { {x: 1, y : 2}, {4, 6}, {7, 8} };
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

void unitTwoImplementation() {
  // ? POINTERS
  referenceAndPointer();

  // ? POINTERS TO ARRAYS AND STRUCTS
  printArrayOfStructs();

  //? POINTERS TO FUNCTIONS
  execFunctionWithPtr();

  functionAsArgument(plusOne);
}

void unitThreeImplementation() {
  cout << "unitThreeImplementation " << endl;
  // ? RECURSIVE FUNCTIONS
  cout << "factorial(5) ->" << factorial(5) << endl;

  const char* str = "hola mundo";
  cout << "reversePrint('hola mundo') ->";
  reversePrint(str);
  cout << endl;

  vector<int> v = { 0, 1, 2, 3, 10 , 5, 11,6,12,7,13,8 ,14,9 };

  for (int val : v) {
    cout << val << " ";
  }
  cout << endl;

  mergeSort(v, 0, v.size() - 1);

  for (int val : v) {
    cout << val << " ";
  }
};

void unitFourImplementation() {
  cout << "UNIT 4\n";
  cout << "----------------\n" << "Inheritance\n" << "----------------\n";
  const char* name = "Joxquin";
  Vehicle vehicle(29, name);
  Car* car = new Car(28, name, 1000);

  vehicle.showData();
  car->showData();

  delete car;
  cout << "\n----------------\n" << "Polymorphism\n" << "----------------\n";
  cout << "Animal is an abstract class that can be used to implement polymorphism\n";
  Dog dog;
  Cat cat;

  Animal* animal = &dog;
  animal->sound();

  animal = &cat;
  animal->sound();

  cout << "\n----------------\n" << "Friendship\n" << "----------------\n";
  cout << "A teacher class can access to the student private attibutes\n";

  Teacher teacher(50000);
  Student student(10, "Joaquín");

  teacher.getStudentNote(&student);

  cout << "The function presentStudent() also can access the student private attibutes\n";
  presentStudent(&student);

  cout << "\n----------------\n" << "Composition\n" << "----------------\n";
  cout << "A class Rectangle is composed by Points\n";

  Rectangle rectangle(2, 1, 6, 19);
  rectangle.print();
}