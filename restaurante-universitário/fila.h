#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <string>
using namespace std;

// Estrutura de um nó da fila encadeada
struct Node {
    string nome;
    Node* next;
};

// Classe para a fila encadeada
class Fila {
private:
    Node* front;
    Node* rear;
public:
    Fila() {
        front = rear = nullptr;
    }

    // Enfileira um novo estudante
    void enfileira(string nome) {
        Node* temp = new Node();
        temp->nome = nome;
        temp->next = nullptr;
        if (rear == nullptr) {  // Se a fila está vazia
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    // Remove e retorna o primeiro da fila
    string desenfileira() {
        if (front == nullptr) {
            return "";  // Fila está vazia
        }
        Node* temp = front;
        string nome = front->nome;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        return nome;
    }

    // Verifica se a fila está vazia
    bool vazia() {
        return front == nullptr;
    }

    // Destrutor para liberar memória
    ~Fila() {
        while (!vazia()) {
            desenfileira();
        }
    }
};

#endif 
