#include <iostream>
#include "fila.h"
#include "pilha.h"

using namespace std;

void exibir_menu(){
  cout << "1 - Enfileirar estudante" << endl;
  cout << "2 - Empilhar prato" << endl;
  cout << "3 - Prosseguir" << endl;
  cout << "4 - Encerrar programa" << endl;
}

int main(){
  Fila fila_estudantes;
  Pilha pilha_pratos(100);
  int op;

  while(true){
    exibir_menu();
    cin >> op;
    if(op == 1){ // enfileirando os estudantes
      cout << "Digite o nome do estudante: " << endl;
      string nome;
      cin >> nome;
      fila_estudantes.enfileira(nome);
    }else if(op == 2){ //empilhando os pratos
      cout << "Digite o id do prato" << endl;
      int id_prato;
      cin >> id_prato;
      pilha_pratos.empilha(id_prato);
    }else if(op == 3){ // prosseguindo os estudantes da fila e retirando os pratos da pilha
      if(fila_estudantes.vazia()){
        cout << "Impossivel prosseguir, nao ha estudantes" << endl;
      }else if(pilha_pratos.vazia()){
        cout << "Impossivel prosseguir, nao ha pratos" << endl;
      }else{
        string estudante = fila_estudantes.desenfileira();
        int prato = pilha_pratos.desempilha();
        cout << "Estudante: " << estudante << " coleta o prato: " << prato << endl;
      }
    }else if(op == 4){ // encerrando o programa
      cout << "Encerrando o programa..." << endl;
      break;
    }else{
      cout << "Digite uma operacao valida" << endl;
    }
  }
}