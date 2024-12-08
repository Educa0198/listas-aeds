#include <iostream>

using namespace std;

class autor
{
    string nome;
    int ano;

    public:

    autor()
    {
        setnome("nenhum");
       
    }

    autor(string nome1)
    {
        setnome(nome1);
    }

    void setnome(string nome1)
    {
        nome = nome1;
    }

    string getnome()
    {
        return nome;
    }

    void exibir()
    {
        cout << "Autor: "  << getnome() << endl;
    }

};

class livro : public autor
{
     int ano;
     string titulo;

     void inicializar(int ano1, string titulo1)
     {
        setano(ano1);
        settitulo(titulo1);
     }

     public:

     livro() 
     {
        inicializar(0, "nenhum");
     }

     livro(int ano1)
     {
        inicializar(ano1 , "nenhum");
     }

     livro(int ano1, string titulo1) 
     {
        inicializar(ano1, titulo1);
     }

     livro(int ano1, string titulo1, string nome1) : autor(nome1)
     {
        inicializar(ano1, titulo1);
     }

    void setano(int ano1)
    {
        ano = ano1;
    }

    void settitulo(string titulo1)
    {
        titulo = titulo1;
    }

    int getano()
    {
        return ano;
    }

    string gettiulo()
    {
        return titulo;
    }

    void exibir()
    {
        cout << "Detalhes do Livro:" << endl;
        cout << "Título: " <<  gettiulo() << endl;
        cout << "Ano de Publicação: " <<  getano() << endl;
        autor::exibir();
    }
};




int main()
{
    string autor;
    string titulo;
    int ano;
    getline (cin, autor);
    getline( cin, titulo);
    cin >> ano;
    livro livro1(ano, titulo, autor);
    livro1.exibir();


}