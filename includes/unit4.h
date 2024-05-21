#ifndef UNIT1_H
#define UNIT1_H

class Person {
public:
    Person(int,char*);
    char* get_name() const;
    int get_age() const;
    void set_name(char[20]);
    void set_age(int);
private:
    int age;
    char name[20];
};

class Teacher : public Person {
    void set_salary(int);
    int get_salary();
private:
    int salary;
};

#endif