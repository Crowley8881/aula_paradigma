#include <stdio.h>
#include <math.h>

// 1. Retorna o maior número de um vetor
int MaiorNumero(int v[], int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

// 2. Retorna a soma dos x primeiros números do vetor
int Soma(int v[], int x) {
    int soma = 0;
    for (int i = 0; i < x; i++) {
        soma += v[i];
    }
    return soma;
}

// 3. Retorna o fatorial de x
int Fatorial(int x) {
    int fat = 1;
    for (int i = 2; i <= x; i++) {
        fat *= i;
    }
    return fat;
}

// 4. Retorna o MDC de x e y
int MDC(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// 5. Retorna os x primeiros números primos
void NumerosPrimos(int x) {
    int count = 0, num = 2;
    while (count < x) {
        int primo = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

// 6. Retorna os x primeiros números da sequência de Fibonacci
void Fibonacci(int x) {
    int a = 0, b = 1;
    for (int i = 0; i < x; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

// 7. Converte binário (representado como inteiro) para decimal
int BinToDec(int x) {
    int dec = 0, base = 1;
    while (x > 0) {
        int digito = x % 10;
        dec += digito * base;
        base *= 2;
        x /= 10;
    }
    return dec;
}

// 8. Converte decimal para binário (como inteiro)
int DecToBin(int x) {
    int bin = 0, base = 1;
    while (x > 0) {
        int resto = x % 2;
        bin += resto * base;
        base *= 10;
        x /= 2;
    }
    return bin;
}

// 9. Fatoração em números primos
void FatoracaoNumerosPrimos(int x) {
    printf("Fatores primos de %d: ", x);
    for (int i = 2; i <= x; i++) {
        while (x % i == 0) {
            printf("%d ", i);
            x /= i;
        }
    }
    printf("\n");
}

// Função principal
int main() {
    int v[] = {3, 7, 2, 9, 5};
    int n = 5;

    printf("Maior número: %d\n", MaiorNumero(v, n));
    printf("Soma dos 3 primeiros: %d\n", Soma(v, 3));
    printf("Fatorial de 5: %d\n", Fatorial(5));
    printf("MDC de 48 e 18: %d\n", MDC(48, 18));

    printf("5 primeiros números primos: ");
    NumerosPrimos(5);

    printf("8 primeiros Fibonacci: ");
    Fibonacci(8);

    printf("Binário 1011 para decimal: %d\n", BinToDec(1011));
    printf("Decimal 13 para binário: %d\n", DecToBin(13));

    FatoracaoNumerosPrimos(60);

    return 0;
}
