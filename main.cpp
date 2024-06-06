#include <iostream>
#include <cstdlib>
#include <vector>
// -----
#include <unit1.h>
#include <unit2.h>
#include <unit3.h>
#include <unit4n5.h>
#include <unit6.h>

void unitOneImplementation();
void unitTwoImplementation();
void unitThreeImplementation();
void unitFourFiveImplementation();
void unitSixImplementation();
void unitSevenImplementation();

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

  // * UNIT 4 and 5
  // unitFourFiveImplementation();
  // unitFourFiveExercises();

  // * UNIT 6
  unitSixImplementation();

  // * UNIT 7
  unitSevenImplementation();


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

void unitFourFiveImplementation() {
  cout << "UNIT 4\n";
  cout << "----------------\n" << "Inheritance\n" << "----------------\n";
  {
    const char* name = "Joxquin";
    Vehicle vehicle(29, name);
    Car* car = new Car(28, name, 1000);

    vehicle.showData();
    car->showData();

    delete car;
  }
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

  cout << "\n----------------\n" << "List & trees\n" << "----------------\n";
  cout << "\n";

  List* l = new List();

  l->remove(1);
  l->add(1);
  l->add(2);
  l->add(3);
  l->add(4);
  l->add(5);
  l->add(6);
  l->add(7);
  l->print();
  l->remove(2);
  l->print();
  l->remove(2);
  l->print();
  l->remove(6);
  l->print();
  l->remove(7);
  l->print();
  l->remove(1);
  l->print();

  Tree* t = new Tree();

  t->add(10);
  t->add(5);
  t->add(7);
  t->add(8);
  t->add(6);
  t->add(9);
  t->add(1);
  t->add(2);
  t->add(3);
  t->add(4);
  t->add(5);
  t->print();
}

void unitSixImplementation() {
  cout << "UNIT 6\n";
  cout << "----------------\n" << "OPERATORS OVERLOAD\n" << "----------------\n";
  PointClass pc1 = PointClass(10, 10);
  PointClass pc2 = PointClass(4, 4);
  PointClass pc3 = PointClass(10, 10);
  PointClass pc4 = PointClass(10, 11);

  cout << "punto 1: " << pc1 << endl;
  cout << "punto 2: " << pc2 << endl;
  cout << "punto 3: " << pc3 << endl;
  cout << "punto 4: " << pc4 << endl;
  cout << endl << "p1 + p2: " << (pc1 + pc2) << endl;
  const char* equals1 = (pc1 == pc3) ? "Si" : "No";
  cout << "p1 == p3: " << equals1 << endl;
  const char* equals2 = (pc1 == pc4) ? "Si" : "No";
  cout << "p1 == p4: " << equals2 << endl;

  cout << "\n----------------\n" << "STRING CLASS\n" << "----------------\n";
  stringsHandler();

  cout << "\n----------------\n" << "EXCEPTIONS (TRY/CATCH)\n" << "----------------\n";
  char confirm = 'y';
  while (confirm != 'n')
  {
    mayFail();
    cout << "Do you want to try again? (y/n): ";
    cin >> confirm;
  }
}

void unitSevenImplementation() {

}