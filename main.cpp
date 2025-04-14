// Biblioteca que implementa recursos de
// entrada/saída baseados em fluxo, utiliza modelos de classe e funções
// com suporte na biblioteca padrão C++
#include <iostream>    // Cabeçalho padrão de entrada/saída C++
#include <cstdio>      // Cabeçalho padrão de entrada/saída C (para scanf/printf)
#include "triangulo.h" // "Chama" o arquivo header da classe Triangulo

using namespace std; // Permite usar nomes para objetos e variáveis
                    // da biblioteca padrão, organizando o código em grupos lógicos e
                    // evitar colisões de nomes quando utiliza-se múltiplas bibliotecas.

float* entraLados();
void imprimeTriangulo(Triangulo* t);

Triangulo* tri; // Cria um ponteiro para a instância de Triangulo

int main() {
    // Alternativa 1
    tri = new Triangulo(); // Primeiro construtor (padrão)
    imprimeTriangulo(tri);  // Exibe os dados da instância Triangulo
    delete tri;            // Destrói o objeto em memória
    tri = nullptr;         // Boa prática: define o ponteiro como nulo após deletar

    cout << "\n--------------------\n"; // Separador

    // Alternativa 2
    float* lados = entraLados();
    if (lados != nullptr) {
        tri = new Triangulo(lados[0], lados[1], lados[2]); // Segundo construtor
        imprimeTriangulo(tri);                               // Exibe os dados da instância Triangulo
        delete tri;                                         // Destrói o objeto em memória
        tri = nullptr;                                      // Boa prática
        delete[] lados;                                     // Libera a memória alocada para os lados
        lados = nullptr;                                    // Boa prática
    } else {
        cout << "Erro ao ler os lados do triângulo.\n";
    }

    cout << "\nFIM DE PROGRAMA\n";
    return 0; // Retorna 0 para indicar execução bem-sucedida
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
// Parâmetro: t - Objeto Triangulo (ponteiro)
void imprimeTriangulo(Triangulo* t) {
    if (t == nullptr) {
        cout << "ERRO: OBJETO NULO!\n";
        return;
    }
    cout << "\n--- Dados do Triângulo ---" << endl;
    cout << "Lado1 = " << t->getLado1() << endl;
    cout << "Lado2 = " << t->getLado2() << endl;
    cout << "Lado3 = " << t->getLado3() << endl;
    cout << "Perímetro = " << t->perimetro() << endl;
    cout << "Área = " << t->area() << endl;
}
