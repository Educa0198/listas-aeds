#include <iostream>
#include <string>
using namespace std;

class Elevador
{
    int andaratual;
    int totalandares;
    int capacidade;
    int PessoasPresentes;

    void inicializar(int andaratual1, int totalandares1, int capacidade1, int PessoasPresentes1)
    {
        setAndarAtual(andaratual1);
        setTotalAndares(totalandares1);
        setCapacidade(capacidade1);
        setPessoasPresentes(PessoasPresentes1);
    }

    public:

    Elevador()
    {
        inicializar(0,0,0,0);
    }

    Elevador(int capacidade1, int totalandares1)
    {
        inicializar(0,totalandares1,capacidade1,0);
    }


    void setAndarAtual(int andaratual1)
    {
        andaratual = andaratual1;
    }

    void setTotalAndares(int totalandares1)
    {
        totalandares = totalandares1;
    }

    void  setCapacidade(int capacidade1)
    {
        capacidade = capacidade1;
    }
    
    void setPessoasPresentes(int PessoasPresentes1)
    {
        PessoasPresentes = PessoasPresentes1;
    }

    int getAndarAtual()
    {
        return andaratual;
    }

    int getTotalAndares()
    {
        return totalandares;
    }

    int getCapacidade()
    {
        return capacidade;
    }

    int getPessoasPresentes()
    {
        return PessoasPresentes;
    }

    void EntraPessoa(int PessoasNovas)
    {
        if(getPessoasPresentes() + PessoasNovas <= getCapacidade())
        {
            PessoasPresentes += PessoasNovas;
            Exibe();
            
        }
    }

    void SaiPessoa(int PessoasNovas)
    {
        if(getPessoasPresentes() - PessoasNovas >= 0)
        {
            PessoasPresentes  -= PessoasNovas;
            Exibe();
        }
    }

    void SobeAndar(int AndarSubindo)
    {
        if(getAndarAtual() + AndarSubindo <= getTotalAndares())
        {
            andaratual += AndarSubindo;
            Exibe();
        }
    }

    void DesceAndar(int AndarDescendo)
    {
        if(getAndarAtual() - AndarDescendo >= 0)
        {
            andaratual -= AndarDescendo;
            Exibe();
        }
    }

    void Exibe()
    {
        cout << "Andar atual: " << getAndarAtual() << endl;
        cout << "Pessoas presentes: " << getPessoasPresentes() << endl;
    }
};

int main()
{
    int AndarAtual;
    int TotalAndares;
    int capacidade;
    int PessoasPresentes;
    int acoes;
    string opcao;

    cin >> capacidade;
    cin >> TotalAndares;
    Elevador elevador1(TotalAndares,capacidade);

    cin >> acoes;
    
   for (int i = 0; i <= acoes; i++) {
        getline(cin, opcao);
        if (opcao == "entrar") {
            elevador1.EntraPessoa(1);
        } else if (opcao == "sair") {
            elevador1.SaiPessoa(1);
        } else if (opcao == "subir") {
            elevador1.SobeAndar(1);
        } else if (opcao == "descer") {
            elevador1.DesceAndar(1);
        }
    }

}