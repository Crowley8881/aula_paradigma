#include <iostream>
#include <vector>
#include <cmath>
#include <string>

static constexpr double PI = 3.141592653589793;

// Classe abstrata Figura
class Figura {
protected:
    double dim1, dim2, dim3;
public:
    Figura(double d1, double d2 = 0, double d3 = 0)
        : dim1(d1), dim2(d2), dim3(d3) {}

    virtual ~Figura() {}

    // Métodos puramente virtuais
    virtual double area() const = 0;
    virtual double volume() const = 0;
    virtual void aumentar() = 0;
    virtual std::string nome() const = 0;

    // Método concreto para exibir dados
    void meusDados() const {
        std::cout << "Figura: " << nome() << "\n";
        std::cout << "Dimensões: " << dim1 << ", " << dim2 << ", " << dim3 << "\n";
        std::cout << "Área: " << area() << "\n";
        std::cout << "Volume: " << volume() << "\n";
        std::cout << "-----------------------------\n";
    }
};

// Cubo: utiliza apenas dim1 (aresta)
class Cubo : public Figura {
public:
    explicit Cubo(double aresta)
        : Figura(aresta) {}

    double area() const override {
        return 6 * dim1 * dim1;
    }

    double volume() const override {
        return dim1 * dim1 * dim1;
    }

    void aumentar() override {
        // aumenta aresta em 10%
        dim1 *= 1.1;
    }

    std::string nome() const override {
        return "Cubo";
    }
};

// Esfera: utiliza apenas dim1 (raio)
class Esfera : public Figura {
public:
    explicit Esfera(double raio)
        : Figura(raio) {}

    double area() const override {
        return 4 * PI * dim1 * dim1;
    }

    double volume() const override {
        return (4.0/3.0) * PI * dim1 * dim1 * dim1;
    }

    void aumentar() override {
        // aumenta raio em 10%
        dim1 *= 1.1;
    }

    std::string nome() const override {
        return "Esfera";
    }
};

// Cilindro: utiliza dim1 (raio) e dim2 (altura)
class Cilindro : public Figura {
public:
    Cilindro(double raio, double altura)
        : Figura(raio, altura) {}

    double area() const override {
        // área total: 2πr(r + h)
        return 2 * PI * dim1 * (dim1 + dim2);
    }

    double volume() const override {
        return PI * dim1 * dim1 * dim2;
    }

    void aumentar() override {
        // aumenta raio e altura em 10%
        dim1 *= 1.1;
        dim2 *= 1.1;
    }

    std::string nome() const override {
        return "Cilindro";
    }
};

int main() {
    std::vector<Figura*> figuras;
    figuras.push_back(new Cubo(3.0));
    figuras.push_back(new Esfera(2.0));
    figuras.push_back(new Cilindro(2.0, 5.0));

    std::cout << "Dados Iniciais:\n";
    for (auto f : figuras) {
        f->meusDados();
    }

    // Aumentar dimensões em 10%
    for (auto f : figuras) {
        f->aumentar();
    }

    std::cout << "Dados Após Aumentar 10%:\n";
    for (auto f : figuras) {
        f->meusDados();
    }

    // Liberar memória
    for (auto f : figuras) {
        delete f;
    }

    return 0;
}
