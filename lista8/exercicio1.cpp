#include <iostream>
#include <cstring>
using namespace std;

class pessoa {
    char nome[50];
    int idade;
    float altura;

public:
    void setnome(const char nome1[]) {
        strcpy(nome, nome1);
    }

    void setidade(int idade1) {
        if (idade1 > 0 && idade1 < 120) {
            idade = idade1;
        }
    }

    void setaltura(float altura1) {
        if (altura1 > 0 && altura1 < 2.5) {
            altura = altura1;
        }
    }

    const char* getnome() const {
        return nome;
    }

    int getidade() const {
        return idade;
    }

    float getaltura() const {
        return altura;
    }
};

pessoa cadastrar() {
    pessoa p;
    char nome[50];
    int idade;
    float altura;

    cout << "Digite o nome: ";
    cin.ignore();
    cin.getline(nome, 50);
    p.setnome(nome);

    cout << "Digite a idade: ";
    cin >> idade;
    p.setidade(idade);

    cout << "Digite a altura: ";
    cin >> altura;
    p.setaltura(altura);

    return p;
}

void exibir(const pessoa& individuo) {
    cout << "Dados da pessoa:" << endl;
    cout << "Nome: " << individuo.getnome() << endl;
    cout << "Idade: " << individuo.getidade() << endl;
    cout << "Altura: " << individuo.getaltura() << endl;
}

int main() {
    int quantidade;
    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidade;

    pessoa pessoas[quantidade];
    for (int i = 0; i < quantidade; i++) {
        pessoas[i] = cadastrar();
    }

    for (int j = 0; j < quantidade; j++) {
        exibir(pessoas[j]);
    }

    return 0;
}
