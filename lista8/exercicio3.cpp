#include <iostream>
using namespace std;

class carro
{
    int tanque;
    float consumo;
    float combustivel;
    float distancia;

public:
    void settanque(int tanque1) { tanque = tanque1; }
    void setconsumo(float consumo1) { consumo = consumo1; }
    void setcombustivel(float combustivel1) { combustivel = combustivel1; }
    void setdistancia(float distancia1) { distancia = distancia1; }

    void setabastecer(float abastecer)
    {
        if (combustivel + abastecer < tanque)
        {
            combustivel += abastecer;
        }
        else
        {
            cout << "O tanque nao tem capacidade suficiente!" << endl;
        }
    }

    void setmover(float mover)
    {
        distancia += mover;
    }

    int gettanque() { return tanque; }
    float getconsumo() { return consumo; }
    float getcombustivel() { return combustivel; }
    float getdistancia() { return distancia; }
};

// Function to register a car
carro cadastrar()
{
    int tanque;
    float consumo;
    float combustivel;
    float distancia;
    carro p;

    cout << "Digite a capacidade do tanque: ";
    cin >> tanque;
    p.settanque(tanque);

    cout << "Digite o consumo (km/l): ";
    cin >> consumo;
    p.setconsumo(consumo);

    cout << "Digite o combustivel atual (litros): ";
    cin >> combustivel;
    p.setcombustivel(combustivel);

    cout << "Digite a distancia percorrida: ";
    cin >> distancia;
    p.setdistancia(distancia);

    return p;
}

int main()
{
    int opcao = -1;  // Initialize opcao to a value that is not 0 to enter the loop.
    float distancia;
    carro carros[2];

    while (opcao != 0)
    {
        // Display menu
        cout << "O que voce quer fazer?" << endl;
        cout << "1 - Cadastrar os carros" << endl;
        cout << "2 - Checar combustivel dos carros" << endl;
        cout << "3 - Checar a distancia dos carros" << endl;
        cout << "4 - Mover os carros" << endl;
        
        cout << "0 - Sair" << endl;

        cin >> opcao;

        for (int i = 0; i < 2; i++)
        {
            if (opcao == 1)
            {
                cout << "Cadastro do carro " << i + 1 << ":" << endl;
                carros[i] = cadastrar();
            }

            if (opcao == 2)
            {
                cout << "Combustivel do carro " << i + 1 << ": " << carros[i].getcombustivel() << " litros" << endl;
            }

            if (opcao == 3)
            {
                cout << "Distancia do carro " << i + 1 << ": " << carros[i].getdistancia() << " km" << endl;
            }

            if (opcao == 4)
            {
                cout << "Digite a distancia que o carro " << i + 1 << " vai percorrer: ";
                cin >> distancia;
                carros[i].setmover(distancia);
            }
        }
    }

    cout << "Programa encerrado." << endl;
    return 0;
}
