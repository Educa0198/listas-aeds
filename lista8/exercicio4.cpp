#include <iostream>

using namespace std;

class autor
{
    string nome;

    public:

    void setnome(string nome1)
    {
        nome = nome1;
    }

    string getnome()
    {
        return nome;
    }
};

class livro : autor 
{
    string titulo;
    int anodepublicacao;

    public:
    void settitulo(string titulo1)
    {
        titulo = titulo1;
    }

    void setano(int ano)
    {
        anodepublicacao = ano;
    }

    string gettitulo()
    {
        return titulo;
    }

    int getano()
    {
        return anodepublicacao;
    }

};




int main()
{
   
}