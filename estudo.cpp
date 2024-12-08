#include <iostream>
#include<string>
using namespace std;

class Aluno
{
    private: 
    string nome;
    int idade;
    float notas[3];

    void inicializar (string nome1, int idade1, float notas1[3])
    {
        setnome(nome1);
        setidade(idade1);
        setnotas(notas1);
    }

    public:

    Aluno()
    {
        float temp[3] = { 1,1,1};
        inicializar("nenhum", 1, temp);
    }

    Aluno(string nome1)
    {
        float temp[3] = { 1,1,1};
        inicializar(nome1 , 1, temp);
    }

    Aluno(string nome1, int idade1)
    {
        float temp[3] = { 1,1,1};
        inicializar(nome1, idade1 , temp);
    }

    Aluno(string nome1, int idade1, float notas1[3])
    {
        inicializar(nome1, idade1, notas1);
    }

    void setnome(string nome1)
    {
        nome = nome1;
    }

    void setidade(int idade1)
    {
        idade = idade1;
    }

    void setnotas(float notas1[3])
    {
        for(int i = 0; i < 3; i++)
        {
            notas[i] = notas1[i];
        }
    }

    string getnome()
    {
        return nome;
    }

    int getidade()
    {
        return idade;
    }

    float* getnotas()
    {
       return notas;
    }

    void exibe()
    {
        cout << getnome() << ", Idade: " << getidade() << ", Notas: " << getnotas()[0] << ", " << getnotas()[1] << " e " << getnotas()[2] << endl;
    }
};

class Grad : public Aluno
{
    string tcc;
    public:
    Grad()
    {
        settcc("Titulo");
    }

    Grad(string nome1 , int idade1 , float notas1[3], string tcc1) : Aluno(nome1, idade1 , notas1)
    {
        settcc(tcc1);
    }

    void settcc(string tcc1)
    {
        tcc = tcc1;
    }

    string gettcc()
    {
        return tcc;
    }

    void Exibe()
    {
        Aluno :: exibe();
        cout << " Tcc: " << gettcc() << endl;
    }
};

int main() {
    float notas[3] = {9.5, 8.0, 7.0};
    Grad alunoGrad("Eduardo", 18, notas, "Inteligência Artificial");
    alunoGrad.Exibe();

    return 0; 
}
