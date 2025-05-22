// Exercício 1 • Escreva um progrma que recebe uma string e imprime a primeira letra dela no formato:
// <palavra> começa com <letra>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    cout << s << " comeca com " << s[0] << '\n';

    return 0;
}