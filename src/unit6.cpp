#include <unit6.h>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

// * OPERATOR OVERLOAD 
PointClass::PointClass(int x, int  y) : x(x), y(y) {}

bool PointClass::operator==(const PointClass& p) const {
    return this->x == p.x && this->y == p.y;
}
PointClass PointClass::operator+(const PointClass& p) const {
    return PointClass(this->x + p.x, this->y + p.y);
}
ostream& operator<<(ostream& os, const PointClass& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}
void PointClass::print() const {
    cout << "(" << x << ", " << y << ")" << endl;
}
// * --------------------
// * EXCEPTIONS

float division(int numerador, int denominador) {
    if (denominador == 0) {
        throw runtime_error("Error: división por cero");
    }
    if (numerador < 0) {
        throw invalid_argument("Error: numerador negativo");
    }
    return static_cast<float>(numerador) / denominador;
}

void mayFail() {
    int numerador, denominador;

    cout << "Ingrese el numerador: ";
    cin >> numerador;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese el denominador: ";
    cin >> denominador;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    try {
        float resultado = division(numerador, denominador);
        cout << "El " << numerador << "/" << denominador << " = " << resultado << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Se ha producido una excepción de tiempo de ejecución: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Se ha producido una excepción de argumento inválido: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Se ha producido una excepción desconocida " << endl;
    }
}

// * --------------------
// * STRING CLASS

void stringsHandler() {
    string s1 = "Hola mundo";
    string s2(10, 'f');
    string s3 = "Hola mundo";
    cout << "s1: " << s1 << ", size: " << s1.size() << ", length: " << s1.length() << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s1 == s2 = " << (s1 == s2) << endl;
    cout << "s1 == s3 = " << (s1 == s3) << endl;

    s1.clear();
    cout << "s1: " << s1 << ", is empty: " << s1.empty() << endl;
    s3.append(" " + s2);
    cout << "s3.append s2: " << s3 << endl;

    cout << "string s3 iterator: ";
    for (auto it = s3.begin(); it != s3.end(); ++it) {
        cout << *it << " ";
    }
}
