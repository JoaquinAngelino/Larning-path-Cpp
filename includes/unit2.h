#ifndef UNIT2_H
#define UNIT2_H

#include <string>

struct Person
{
    std::string name;
    int age;
};

void referenceAndPointer();

void printArrayOfStructs();

void execFunctionWithPtr();

void functionAsArgument(int (*)(int));


// UTILS
int plusOne(int);

#endif // UNIT2_H