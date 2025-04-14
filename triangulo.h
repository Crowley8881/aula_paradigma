#ifndef TRIANGULO_H // Diretivas de compila��o condicional.
#define TRIANGULO_H // Evita que arquivos de cabe�alho sejam adicionados reiteradas vezes.

class Triangulo {
private:
    float lado1; // Corre��o do nome da vari�vel
    float lado2; // Corre��o do nome da vari�vel
    float lado3; // Corre��o do nome da vari�vel
    static int quantidade;

public:
    Triangulo(); // Construtor padr�o da classe
    Triangulo(float l1, float l2, float l3); // Construtor com par�metros (sobrecarga)
    ~Triangulo(); // Destrutor da classe

    // Getters e setters
    float getLado1() const; // Adicionado const para indicar que n�o modifica o objeto
    void setLado1(float l1); // Corre��o do nome da fun��o e do tipo do par�metro

    float getLado2() const; // Adicionado const
    void setLado2(float l2); // Corre��o do nome da fun��o e do tipo do par�metro

    float getLado3() const; // Adicionado const
    void setLado3(float l3); // Corre��o do nome da fun��o e do tipo do par�metro

    static int getQuantidade();
    static void setQuantidade(int qtd); // Corre��o do nome do par�metro

    float perimetro() const; // Adicionado const
    float area() const; // Adicionado const
};

#endif
