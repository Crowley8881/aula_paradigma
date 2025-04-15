#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado {
private:
    float lado;
    bool ladoValido();

public:
    Quadrado();                      // <-- este precisa estar declarado aqui
    Quadrado(float lado);
    Quadrado(float valor, int tipo);

    float getLado();
    float perimetro();
    float area();
    float diagonal();

    ~Quadrado();
};

#endif
