#ifndef UNIT9_H
#define UNIT9_H
#include <iostream>
#include <typeinfo>
#include <vector>
#include <algorithm>

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
    void print() const { cout << "GenericClass: " << data << endl; }
};

// GENERIC CLASS SPECIALIZATION
template<>
class GenericClass<notPrintable> {
private:
    notPrintable data;
public:
    GenericClass(notPrintable d) : data(d) {};
    void print() const {
        cout << "GenericClass<notPrintable>: " << data.name << ", " << data.age << endl;
    }
};

// GENERIC CLASS INHERITANCE 

template<typename T, typename U>
class Base {
private:
    T first;
    U second;
public:
    Base(T t, U u) : first(t), second(u) {}

    virtual void print() {
        cout << "Base->print: " << first << ", " << second << endl;
    }
};

// GENERIC INHERITANCE
template<typename T, typename U>
class Derived : public Base<T, U> {
public:
    Derived(T first, U second) : Base<T, U>(first, second) {}

    void print() override {
        cout << "Derived->print <T, U>" << endl;
    }
};


// INHERITANCE SPECIALIZATION
template<>
class Derived<int, float> : public Base<int, float> {
public:
    Derived(int first, float second) : Base<int, float>(first, second) {}

    void print() override {
        cout << "Derived->print <int, float>" << endl;
    }
};


// STANDARD TEMPLATE LIBRARY

void vectorsImplementation();


#endif //UNIT9_H