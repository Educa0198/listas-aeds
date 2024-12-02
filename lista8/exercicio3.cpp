#include <iostream>
using namespace std;

class Carro
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
        if (combustivel + abastecer <= tanque) // Check if there is enough room in the tank
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
        float consumoNecessario = mover / consumo; // Fuel needed for the movement
        if (combustivel >= consumoNecessario)
        {
            distancia += mover;
            combustivel -= consumoNecessario; // Deduct fuel used
        }
        else
        {
            cout << "Nao ha combustivel suficiente para percorrer a distancia!" << endl;
        }
    }

    int gettanque() { return tanque; }
    float getconsumo() { return consumo; }
    float getcombustivel() { return combustivel; }
    float getdistancia() { return distancia; }
};

// Function to register a car
Carro cadastrar()
{
    int tanque;
    float consumo;
    float combustivel;
    float distancia;
    Carro p;

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

void exibirCombustivel(Carro& carro, int numeroCarro)
{
    cout << "Combustivel do carro " << numeroCarro << ": " << carro.getcombustivel() << " litros" << endl;
}

void exibirDistancia(Carro& carro, int numeroCarro)
{
    cout << "Distancia do carro " << numeroCarro << ": " << carro.getdistancia() << " km" << endl;
}

void moverCarro(Carro& carro, int numeroCarro)
{
    float distancia;
    cout << "Digite a distancia que o carro " << numeroCarro << " vai percorrer: ";
    cin >> distancia;
    carro.setmover(distancia);
}

void abastecerCarro(Carro& carro, int numeroCarro)
{
    float combustivel;
    cout << "Digite a quantidade de litros para o carro " << numeroCarro << ": ";
    cin >> combustivel;
    carro.setabastecer(combustivel);
}

int main()
{
    int opcao = -1;  // Initialize opcao to a value that is not 0 to enter the loop.
    Carro carros[2];

    while (opcao != 0)
    {
        // Display menu
        cout << "O que voce quer fazer?" << endl;
        cout << "1 - Cadastrar os carros" << endl;
        cout << "2 - Checar combustivel dos carros" << endl;
        cout << "3 - Checar a distancia dos carros" << endl;
        cout << "4 - Mover os carros" << endl;
        cout << "5 - Abastecer os carros" << endl;
        cout << "0 - Sair" << endl;

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            // Cadastrar os carros
            for (int i = 0; i < 2; i++)
            {
                cout << "Cadastro do carro " << i + 1 << ":" << endl;
                carros[i] = cadastrar();
            }
            break;

        case 2:
            // Checar combustivel dos carros
            for (int i = 0; i < 2; i++)
            {
                exibirCombustivel(carros[i], i + 1);
            }
            break;

        case 3:
            // Checar a distancia dos carros
            for (int i = 0; i < 2; i++)
            {
                exibirDistancia(carros[i], i + 1);
            }
            break;

        case 4:
            // Mover os carros
            for (int i = 0; i < 2; i++)
            {
                moverCarro(carros[i], i + 1);
            }
            break;

        case 5:
            // Abastecer os carros
            for (int i = 0; i < 2; i++)
            {
                abastecerCarro(carros[i], i + 1);
            }
            break;

        case 0:
            cout << "Programa encerrado." << endl;
            break;

        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
    }

    return 0;
}
