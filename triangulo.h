#ifndef TRIANGULO_H // Diretivas de compilação condicional.
#define TRIANGULO_H // Evita que arquivos de cabeçalho sejam adicionados reiteradas vezes.

class Triangulo {
private:
    float lado1; // Correção do nome da variável
    float lado2; // Correção do nome da variável
    float lado3; // Correção do nome da variável
    static int quantidade;

public:
    Triangulo(); // Construtor padrão da classe
    Triangulo(float l1, float l2, float l3); // Construtor com parâmetros (sobrecarga)
    ~Triangulo(); // Destrutor da classe

    // Getters e setters
    float getLado1() const; // Adicionado const para indicar que não modifica o objeto
    void setLado1(float l1); // Correção do nome da função e do tipo do parâmetro

    float getLado2() const; // Adicionado const
    void setLado2(float l2); // Correção do nome da função e do tipo do parâmetro

    float getLado3() const; // Adicionado const
    void setLado3(float l3); // Correção do nome da função e do tipo do parâmetro

    static int getQuantidade();
    static void setQuantidade(int qtd); // Correção do nome do parâmetro

    float perimetro() const; // Adicionado const
    float area() const; // Adicionado const
};

#endif
