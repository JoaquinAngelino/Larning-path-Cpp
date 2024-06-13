#ifndef UNIT9_H
#define UNIT9_H
#include <iostream>
#include <typeinfo>

using namespace std;

struct notPrintable {
    string name;
    int age;
};

// GENERIC FUNCTION
template<typename T>
T genericPrint(T data) {
    cout << "genericFn (" << typeid(data).name() << ")" << data << endl;
    return data;
}

// GENERIC CLASS
template<typename T>
class GenericClass {
private:
    T data;
public:
    GenericClass(T d) : data(d) {};
    void print() { cout << "GenericClass: " << data << endl; }
};

#endif