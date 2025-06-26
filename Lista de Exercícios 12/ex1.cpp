// Exercício 1 • Faça uma struct para alunos que permita o professor registrar notas e faça uma
// função que permita calcular a média final (20% nota de exercícios e 80% notas de
// duas provas, uma com peso 4 e outra com peso 6).
#include <iostream>

using namespace std;

struct Aluno {
    float exercicios;
    float prova4;
    float prova6;

    float media() {
        return (0.2 * this->exercicios) + (0.32 * this->prova4) + (0.48 * this->prova6);
    }
};

int main() {
    struct Aluno aluno;

    cout << "Insira a nota de exercicios (0-10): ";
    cin >> aluno.exercicios;

    cout << "Insira a nota da Prova de Peso 4 (0-10): ";
    cin >> aluno.prova4;

    cout << "Insira a nota da prova de Peso 6 (0-10): ";
    cin >> aluno.prova6;

    cout << "A media final do aluno foi: " << aluno.media();

    return 0;
}