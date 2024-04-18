#include <unit2.h>
#include <iostream>

using namespace std;

// * '&' AND '*' OPERATOR
void referenceAndPointer()
{
    cout << "\n--- referenceAndPointer ---" << endl;
    int value = 10;
    int &reference = value;
    int *pointer = &value;

    cout << "value: " << value << endl;
    cout << "reference: " << reference << endl;
    cout << "pointer: " << pointer << endl;
    cout << "*pointer: " << *pointer << endl;

    reference = 20;
    cout << "value: " << value << endl;
    cout << "reference: " << reference << endl;
    cout << "pointer: " << pointer << endl;
    cout << "*pointer: " << *pointer << endl;

    *pointer = 30;
    cout << "value: " << value << endl;
    cout << "reference: " << reference << endl;
    cout << "pointer: " << pointer << endl;
    cout << "*pointer: " << *pointer << endl;

    cout << "---" << endl;
}
// * '&' AND '*' OPERATOR
// * --------------------

// * --------------------
// * POINTERS TO ARRAYS AND STRUCTS
void printArrayOfStructs()
{
    cout << "\n--- printArrayOfStructs ---" << endl;
    Person *people = new Person[2]; // Asignación dinámica, arreglo de dos estructuras
    people[0] = {"Alice", 28};
    people[1] = {"Carlos", 35};

    // Uso del puntero para acceder a los elementos del arreglo
    for (int i = 0; i < 2; i++)
    {
        std::cout << people[i].name << " is " << people[i].age << " years old." << std::endl;
    }

    delete[] people; // Es crucial liberar la memoria asignada dinámicamente
    cout << "---" << endl;
}
// * POINTERS TO ARRAYS AND STRUCTS
// * --------------------

// * --------------------
// * POINTERS TO FUNCTIONS
int plusOne(int x);

int plusOne(int x){
    return x + 1;
}

void execFunctionWithPtr()
{
    cout << "\n--- execFunctionWithPtr ---" << endl;

    int (*ptr)(int) = plusOne;

    cout << ptr(4) << endl;
    cout << "---" << endl;
}
// * POINTERS TO FUNCTIONS
// * --------------------
