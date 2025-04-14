#include <iostream>
#include <cmath>
#include "triangulo.h"

// Inicializa��o da vari�vel est�tica quantidade
int Triangulo::quantidade = 0;

// Construtor padr�o
Triangulo::Triangulo() : lado1(0.0f), lado2(0.0f), lado3(0.0f) {
    quantidade++;
    std::cout << "Triangulo padr�o criado. Quantidade total: " << quantidade << std::endl;
}

// Construtor com par�metros
Triangulo::Triangulo(float l1, float l2, float l3) : lado1(l1), lado2(l2), lado3(l3) {
    quantidade++;
    std::cout << "Triangulo com lados " << lado1 << ", " << lado2 << ", " << lado3
              << " criado. Quantidade total: " << quantidade << std::endl;
}

// Destrutor
Triangulo::~Triangulo() {
    quantidade--;
    std::cout << "Triangulo destru�do. Quantidade restante: " << quantidade << std::endl;
}

// Getters
float Triangulo::getLado1() const {
    return lado1;
}

float Triangulo::getLado2() const {
    return lado2;
}

float Triangulo::getLado3() const {
    return lado3;
}

// Setters
void Triangulo::setLado1(float l1) {
    lado1 = l1;
}

void Triangulo::setLado2(float l2) {
    lado2 = l2;
}

void Triangulo::setLado3(float l3) {
    lado3 = l3;
}

// Getter para a quantidade de tri�ngulos
int Triangulo::getQuantidade() {
    return quantidade;
}

// Setter para a quantidade de tri�ngulos (geralmente n�o � recomendado usar um setter para vari�veis est�ticas que representam contagem)
void Triangulo::setQuantidade(int qtd) {
    quantidade = qtd;
}

// C�lculo do per�metro
float Triangulo::perimetro() const {
    return lado1 + lado2 + lado3;
}

// C�lculo da �rea (f�rmula de Heron)
float Triangulo::area() const {
    float sp = (lado1 + lado2 + lado3) / 2.0f;
    return std::sqrt(sp * (sp - lado1) * (sp - lado2) * (sp - lado3));
}
