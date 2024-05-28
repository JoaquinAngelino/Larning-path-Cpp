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
        char * name = this->get_name() ;
        cout << "CAR - " << " Age: " << this->get_age() << ", Name: " << name << ", Salary: " << salary << "\n";
        delete[] name;
    };

    Car(int age, const char* name, int salary) : Vehicle(age, name) {
        this->salary = salary;
    };
private:
    int salary;
};

#endif