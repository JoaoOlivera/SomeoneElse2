#include <iostream>
#include <vector>

using namespace std;

// Função para calcular a média de um vetor de números
double calcularMedia(const vector<double>& numeros) {
    double soma = 0.0;
    for (double numero : numeros) {
        soma += numero;
    }
    return numeros.empty() ? 0.0 : soma / numeros.size();
}

int main() {
    // Vetor para armazenar os números
    vector<double> numeros;

    // Ler os números do usuário
    cout << "Digite uma lista de números (digite 0 para parar):\n";
    double numero;
    while (cin >> numero && numero != 0) {
        numeros.push_back(numero);
    }

    // Calcular e exibir a média
    double media = calcularMedia(numeros);
    cout << "A média dos números é: " << media << endl;

    return 0;
}