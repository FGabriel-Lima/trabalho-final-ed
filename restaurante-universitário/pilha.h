#ifndef PILHA_H
#define PILHA_H

#include <iostream>
using namespace std;

// Classe para a pilha usando array
class Pilha {
private:
    int* pratos;
    int topo;
    int capacidade;
public:
    Pilha(int tamanho) {
        capacidade = tamanho;
        pratos = new int[capacidade];
        topo = -1;  // Pilha vazia
    }

    // Adiciona um prato na pilha
    void empilha(int idPrato) {
        if (topo == capacidade - 1) {
            cout << "A pilha de pratos está cheia!" << endl;
            return;
        }
        pratos[++topo] = idPrato;
    }

    // Remove e retorna o prato no topo da pilha
    int desempilha() {
        if (topo == -1) {
            return -1;  // Pilha vazia
        }
        return pratos[topo--];
    }

    // Verifica se a pilha está vazia
    bool vazia() {
        return topo == -1;
    }

    // Destrutor para liberar a memória alocada
    ~Pilha() {
        delete[] pratos;
    }
};

#endif