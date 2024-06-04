#ifndef UNIT4n5_H
#define UNIT4n5_H

#include <string.h>
#include <iostream>

using namespace std;

class Vehicle {
public:
    int get_age() const {
        return age;
    };

    void showData() const {
        cout << "VEHICLE - " << "Age: " << age << ", Name: " << name << "\n";
    }

    char* get_name() const {
        char* temp = new char[strlen(name) + 1];
        strcpy(temp, name);
        return temp;
    };

    void set_age(int age) {
        this->age = age;
    };

    void set_name(char name[20]) {
        strcpy(this->name, name);
    };

    Vehicle(int age, const char* name) {
        this->age = age;
        strcpy(this->name, name);
    };

    ~Vehicle() {
        cout << "\nVehicle destruction\n";
    };
private:
    int age;
    char name[20];
};

class Car : public Vehicle {
public:
    void set_salary(int salary) {
        this->salary = salary;
    };
    int get_salary() {
        return salary;
    };

    void showData() const {
        char* name = this->get_name();
        cout << "CAR - " << " Age: " << this->get_age() << ", Name: " << name << ", Salary: " << salary << "\n";
        delete[] name;
    };

    Car(int age, const char* name, int salary) : Vehicle(age, name) {
        this->salary = salary;
    };
private:
    int salary;
};

// POLYMORPHISM
class Animal {
public:
    Animal() {};

    virtual void sound() const = 0;
};

class Dog : public Animal {
public:
    void sound() const {
        cout << "Bark\n";
    };

    Dog() : Animal() {};
};

class Cat : public Animal {
public:
    void sound() const {
        cout << "Meow\n";
    };

    Cat() : Animal() {};
};

// FRIENDSHIP
class Student {
private:
    int note;
    char name[20];
public:
    Student(const int n, const  char* nm) : note(n) {
        strcpy(this->name, nm);
    };

    friend class Teacher;
    friend void presentStudent(const Student*);
};

class Teacher {
private:
    int salary;
public:
    Teacher(const int s) : salary(s) {};

    void getStudentNote(const Student* s) {
        cout << s->name << " - " << s->note << "\n";
    }

    // friend class student;
};

void presentStudent(const Student* s) {
    cout << "Hi, My name is " << s->name << " & my note is " << s->note << "\n";
}

#endif