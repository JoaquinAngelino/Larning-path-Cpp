#include <unit6.h>
#include <iostream>

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

