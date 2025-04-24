#include <bits/stdc++.h> // Importa todas as bibliotecas std de C++
using namespace std; // Utilize o namespace std como padrão

// Exercício 1
// Crie uma função "imprime_ola()" que nao recebe parâmetros e imprime "Ola, mundo!".
void imprime_ola() {
    cout << "Ola, mundo!";
}

// Exercício 2
// Crie uma função quadrática com as variáveis a, b, e c declaradas globalmente.
float a, b, c;
float funcao_quadratica(float x) {
    return x * a*a + x * b + c;
}

// Exercício 3
// Crie uma função "celsius_para_fahrenheit()" que converte Celsius para Fahrenheit
float celsius_para_fahrenheit(float temp) {
    return (temp * 9.0f / 5.0f) + 32.0f;
}

// Exercício 4
// Crie uma função "eh_primo()" que recebe um número inteiro e retorna 1 se for primo ou 0 caso contrário.
int eh_primo(int numero) {
    if(numero <= 1) return 0; // Se o número for menor ou igual a 1, não é primo.
    else if(numero == 2) return 1; // Se o número for 2, é primo

    for(int i = 3; i < sqrt(numero); i += 2) // Para cada valor ímpar entre 3 e a raiz quadrada do número, verifique se ele é divisível por ele.
        if(numero % i == 0) return 0; // Caso seja, não é primo.

    return 1; // Caso a função chegue nesse ponto, o número é primo.
}

// Exercício 5
// Crie uma função "calcula_imc()" que recebe peso (kg) e altura (m) e retorna um inteiro ao depender do IMC.
// Faça uma segunda função "imprima_imc()" que chame a primeira e imprima o resultado por escrito.
// < 18.5 = Magreza
// 18.5 - 24.9 = Saudável
// 25 - 29.9 = Sobrepeso
// > 30 = Obesidade
int calcula_imc(float peso, float altura) {
    float imc = peso / (altura * altura);

    if(imc < 18.5) return 0;
    else if(imc < 25) return 1;
    else if(imc < 30) return 2;
    else return 3;
}

void imprima_imc(float peso, float altura) {
    int imc = calcula_imc(peso, altura);

    if(imc == 0) cout << "Magreza";
    else if(imc == 1) cout << "Saudavel";
    else if(imc == 2) cout << "Sobrepeso";
    else if(imc == 3) cout << "Obesidade";
}

// Exercício 6
// Crie uma função eh_palindromo() que recebe um número inteiro e retorna 1 se for palíndromo (ex: 121) ou 0 caso contrário.
int eh_palindromo(int numero) {
    string n = to_string(numero); // Converta o número para string
    int s = n.size();

    for(int i = 0; i < s / 2; ++i) // Para todos os caracteres do número do 1º até metade, verifique se seu oposto é igual.
        if(n[i] != n[s - i - 1]) return 0; // Se não for, retorne 0

    return 1;
}

// Exercício 7
// Crie uma função calcular_circulo() que calcule o perímetro e a área e os armazena
// em duas variáveis (use ponteiros de endereços).
void calcular_circulo(float raio, float *perimetro, float *area) {
    // Essa função usa da constante M_PI inclusa no compilador GCC
    *perimetro = 2 * M_PI * raio;
    *area = M_PI * (raio * raio);
}

// Exercício 8
// Crie uma função distancia() que recebe coordenadas (x1, y1) e (x2, y2) e retorna a
// distância euclidiana entre os pontos. Use sqrt() da biblioteca <math.h>. para achar a
// raíz quadrada.
float distancia(float x1, float y1, float x2, float y2) {
    float dx = abs(x2 - x1);
    float dy = abs(y2 - y1);

    return sqrt(dx*dx + dy*dy);
}