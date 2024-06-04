#ifndef UNIT4n5_H
#define UNIT4n5_H

#include <string.h>
#include <iostream>
#include <stdlib.h>

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

// COMPOSITION
class Dot {
private:
    int x;
    int y;
public:
    Dot(const int x, const int y) : x(x), y(y) {};

    void print() const {
        cout << "X: " << x << ", Y: " << y << "\n";
    };
    int getX() { return x; };
    int getY() { return y; };
};

class Rectangle {
private:
    Dot* a;
    Dot* b;
public:
    void print() {
        for (int i = 0; i < abs(a->getX() - b->getX()); i++) {
            cout << "#";
            for (int i = 0; i < abs(a->getY() - b->getY()); i++) {
                cout << '#';
            }
            cout << "\n";
        }
    };

    Rectangle(int x1, int y1, int x2, int y2) {
        a = new Dot(x1, y1);
        b = new Dot(x2, y2);
    }

    ~Rectangle() {
        delete a;
        delete b;
    };
};

// LIST & TREE
class Node {
private:
    int data;
    Node* next;
public:
    Node(int x) : data(x), next(nullptr) {}

    int getData() { return data; }
    Node* getNext() { return next; }
    void setNext(Node* n) { next = n; }
};

class List {
private:
    Node* head;
public:
    List() :head(nullptr) {}

    bool remove(int x) {
        if (!head) { return false; }

        if (head->getData() == x) {
            Node* temp = head->getNext();
            delete head;
            head = temp;
            return true;
        }

        Node* aux = head;
        Node* seeker = head->getNext();

        while (seeker && seeker->getData() != x) {
            aux = seeker;
            seeker = seeker->getNext();
        }

        if (!seeker) { return false; }

        aux->setNext(seeker->getNext());
        delete seeker;
        return true;
    }

    void add(int x) {
        Node* newNode = new Node(x);
        if (!head) {
            head = newNode;
            return;
        }

        Node* last = head;

        while (last->getNext()) {
            last = last->getNext();
        }

        last->setNext(newNode);
    }

    void print() {
        if (!head) {
            cout << "Empty LIST\n";
            return;
        }

        Node* aux = head;
        while (aux) {
            cout << aux->getData() << " ";
            aux = aux->getNext();
        }
        cout << endl;
    }

    ~List() {
        while (head) {
            Node* temp = head;
            head = head->getNext();
            delete temp;
        }
    }
};

#endif