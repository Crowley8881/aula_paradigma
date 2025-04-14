// Biblioteca que implementa recursos de
// entrada/sa�da baseados em fluxo, utiliza modelos de classe e fun��es
// com suporte na biblioteca padr�o C++
#include <iostream>    // Cabe�alho padr�o de entrada/sa�da C++
#include <cstdio>      // Cabe�alho padr�o de entrada/sa�da C (para scanf/printf)
#include "triangulo.h" // "Chama" o arquivo header da classe Triangulo

using namespace std; // Permite usar nomes para objetos e vari�veis
                    // da biblioteca padr�o, organizando o c�digo em grupos l�gicos e
                    // evitar colis�es de nomes quando utiliza-se m�ltiplas bibliotecas.

float* entraLados();
void imprimeTriangulo(Triangulo* t);

Triangulo* tri; // Cria um ponteiro para a inst�ncia de Triangulo

int main() {
    // Alternativa 1
    tri = new Triangulo(); // Primeiro construtor (padr�o)
    imprimeTriangulo(tri);  // Exibe os dados da inst�ncia Triangulo
    delete tri;            // Destr�i o objeto em mem�ria
    tri = nullptr;         // Boa pr�tica: define o ponteiro como nulo ap�s deletar

    cout << "\n--------------------\n"; // Separador

    // Alternativa 2
    float* lados = entraLados();
    if (lados != nullptr) {
        tri = new Triangulo(lados[0], lados[1], lados[2]); // Segundo construtor
        imprimeTriangulo(tri);                               // Exibe os dados da inst�ncia Triangulo
        delete tri;                                         // Destr�i o objeto em mem�ria
        tri = nullptr;                                      // Boa pr�tica
        delete[] lados;                                     // Libera a mem�ria alocada para os lados
        lados = nullptr;                                    // Boa pr�tica
    } else {
        cout << "Erro ao ler os lados do tri�ngulo.\n";
    }

    cout << "\nFIM DE PROGRAMA\n";
    return 0; // Retorna 0 para indicar execu��o bem-sucedida
}

// Entrada, via teclado, dos valores dos lados
float* entraLados() {
    float* lados = new float[3]; // Aloca dinamicamente um array de 3 floats
    cout << "Digite o valor do Lado 1: ";
    if (scanf("%f", &lados[0]) != 1) {
        cout << "Erro na leitura do Lado 1.\n";
        delete[] lados;
        return nullptr;
    }
    cout << "Digite o valor do Lado 2: ";
    if (scanf("%f", &lados[1]) != 1) {
        cout << "Erro na leitura do Lado 2.\n";
        delete[] lados;
        return nullptr;
    }
    cout << "Digite o valor do Lado 3: ";
    if (scanf("%f", &lados[2]) != 1) {
        cout << "Erro na leitura do Lado 3.\n";
        delete[] lados;
        return nullptr;
    }
    return lados;
}

// Imprime os dados de um triangulo.
// Par�metro: t - Objeto Triangulo (ponteiro)
void imprimeTriangulo(Triangulo* t) {
    if (t == nullptr) {
        cout << "ERRO: OBJETO NULO!\n";
        return;
    }
    cout << "\n--- Dados do Tri�ngulo ---" << endl;
    cout << "Lado1 = " << t->getLado1() << endl;
    cout << "Lado2 = " << t->getLado2() << endl;
    cout << "Lado3 = " << t->getLado3() << endl;
    cout << "Per�metro = " << t->perimetro() << endl;
    cout << "�rea = " << t->area() << endl;
}
