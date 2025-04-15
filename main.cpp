    #include <iostream>
    #include "quadrado.h"

    int main() {
        try {
            Quadrado q1; // lado padr�o
            Quadrado q2(4.0f); // lado direto
            Quadrado q3(16.0f, 2); // �rea -> lado = sqrt(16)

            std::cout << "Quadrado 1: lado = " << q1.getLado() << ", area = " << q1.area() << "\n";
            std::cout << "Quadrado 2: lado = " << q2.getLado() << ", perimetro = " << q2.perimetro() << "\n";
            std::cout << "Quadrado 3: lado = " << q3.getLado() << ", diagonal = " << q3.diagonal() << "\n";
        } catch (const std::exception& e) {
            std::cerr << "Erro: " << e.what() << "\n";
        }

        return 0;
    }
