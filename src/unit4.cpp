#include <unit4.h>
#include <string.h>


// Person
int Person::get_age() const {
    return Person::age;
};

char* Person::get_name() const {
    char* temp = new char[20];
    strcpy(temp, Person::name);
    return temp;
};

void Person::set_age(int age) {
    Person::age = age;
};

void Person::set_name(char name[20]) {
    strcpy(Person::name, name);
};

Person::Person(int age, char* name) {
    Person::age = age;
    strcpy(Person::name, name);
};

// Teacher
