#include <iostream>
using namespace std;

void bubbleSortRec(int vetor[], int n) {
    // Caso base: se o tamanho do vetor for 1, ele já está ordenado
    if (n == 1)
        return;

    // Realiza uma passada pelo array
    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            // Troca os elementos adjacentes se estão fora de ordem
            swap(vetor[i], vetor[i + 1]);
        }
    }

    // Chama a função recursivamente para o restante do vetor
    bubbleSortRec(vetor, n - 1);
}

int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(vetor)/sizeof(vetor[0]);

    bubbleSortRec(vetor, n);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
