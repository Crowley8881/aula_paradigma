#include "quadrado.h"
#include <cmath>  // Para sqrt()

// Implementações
Quadrado::Quadrado() : lado(1.0f) {}

Quadrado::Quadrado(float lado) : lado(lado) {
    if (!ladoValido()) {
        throw std::invalid_argument("Lado deve ser positivo");
    }
}

Quadrado::Quadrado(float valor, int tipo) : lado(0) {
    if (valor <= 0) {
        throw std::invalid_argument("Valor deve ser positivo");
    }

    switch (tipo) {
        case 1: lado = valor / 4; break;
        case 2: lado = std::sqrt(valor); break;
        case 3: lado = valor / std::sqrt(2); break;
        default:
            throw std::invalid_argument("Tipo inválido (use 1, 2 ou 3)");
    }
}

bool Quadrado::ladoValido() { return lado > 0; }
float Quadrado::getLado() { return lado; }
float Quadrado::perimetro() { return 4 * lado; }
float Quadrado::area() { return lado * lado; }
float Quadrado::diagonal() { return lado * std::sqrt(2); }
Quadrado::~Quadrado() = default;
