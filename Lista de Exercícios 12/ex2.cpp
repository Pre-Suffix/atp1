// Exercício 2 • Faça uma struct para lista de alunos (dica: adapte o exemplo da aula) e uma função
// que calcule e imprima a média de cada aluno.
#include <iostream>

using namespace std;

struct Aluno {
    char nome[50] = "";
    int matricula = 0;
    float nota = 0.0f;
};

int main() {

    const int numeroDeAlunos = 5;

    struct Aluno alunos[numeroDeAlunos];

    for(int i = 0; i < numeroDeAlunos; ++i) {
        cout << "(ALUNO " << i + 1 << ")\n";

        cout << "Insira o nome do aluno: ";
        cin >> alunos[i].nome;

        cout << "Insira o numero de matricula do aluno: ";
        cin >> alunos[i].matricula;

        cout << "Insira a media do aluno: ";
        cin >> alunos[i].nota;
    }

    for(int i = 0; i < numeroDeAlunos; ++i)
        cout << alunos[i].nome << " (" << alunos[i].matricula << "): Nota " << alunos[i].nota << '\n';

    return 0;
}