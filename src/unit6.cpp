#include <unit6.h>
#include <iostream>
#include <string>

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
        throw std::runtime_error("Error: división por cero");
    }
    if (numerador < 0) {
        throw std::invalid_argument("Error: numerador negativo");
    }
    return static_cast<float>(numerador) / denominador;
}

void mayFail() {
    int numerador, denominador;

    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;
    std::cout << "Ingrese el denominador: ";
    std::cin >> denominador;
    try {
        float resultado = division(numerador, denominador);
        std::cout << "El " << numerador << "/" << denominador << " = " << resultado << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Se ha producido una excepción de tiempo de ejecución: " << e.what() << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Se ha producido una excepción de argumento inválido: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Se ha producido una excepción desconocida " << std::endl;
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

    std::cout << "string s3 iterator: ";
    for (auto it = s3.begin(); it != s3.end(); ++it) {
        std::cout << *it << " ";
    }
}
