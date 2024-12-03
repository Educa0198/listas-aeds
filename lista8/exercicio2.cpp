#include <iostream>
using namespace std;

class relogio {
    int hora, minuto, segundo;

public:

    void sethora(int hora1) {
        hora = hora1;
        if (hora == 24) {
            hora = 0;
        }
    }

    void setminuto(int minuto1) {
        minuto = minuto1;
        if (minuto == 60) {
            minuto = 0;
            sethora(hora + 1);
        }
    }

    void setsegundo(int segundo1) {
        segundo = segundo1;
        if (segundo == 60) {
            segundo = 0;
            setminuto(minuto + 1);
        }
    }

    int gethora() { return hora; }
    int getminuto() { return minuto; }
    int getsegundo() { return segundo; }
};

relogio cadastrar() {
    relogio p;
    int hora, minuto, segundo;
    cin >> hora >> minuto >> segundo;
    p.sethora(hora);
    p.setminuto(minuto);
    p.setsegundo(segundo);
    return p;
}

int main() {
    int quantidade;
    cin >> quantidade;

    relogio relogio1 = cadastrar();

    for (int i = 0; i < quantidade; i++) {
        int segundo = relogio1.getsegundo();
        relogio1.setsegundo(segundo + 1);

        cout << relogio1.gethora() << " : "
             << relogio1.getminuto() << " : "
             << relogio1.getsegundo() << endl;
    }

    return 0;
}
