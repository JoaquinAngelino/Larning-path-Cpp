#ifndef UNIT6_H
#define UNIT6_H
#include <iostream>

using namespace std;


// OPERATORS OVERLOAD
class PointClass {
private:
    int x;
    int y;
public:
    PointClass(int, int);
    void print() const;
    bool operator==(const PointClass&) const;
    PointClass operator+(const PointClass&) const;
    friend ostream& operator<<(ostream&, const PointClass&);
};

// EXCEPTIONS 
float division(int,int);
void mayFail();

// STRING CLASS
void stringsHandler();

#endif