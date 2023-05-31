#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int op = -1;
    int ultimaGerada = 0;
    int qtdAtendidas = 0;

    do
    {
        do
        {
            cout << "Senhas aguardando atendimento: " << (ultimaGerada - qtdAtendidas) << endl;
            cout << "Escolha uma opcao:" << endl;
            cout << "0. Sair" << endl;
            cout << "1. Gerar senha" << endl;
            cout << "2. Realizar atendimento" << endl;
            cout << "Opcao escolhida: ";
            cin >> op;
        } while (op != 0 && op != 1 && op != 2);

        if (op == 0 && ultimaGerada != qtdAtendidas)
        {
            cout << "Atenda todas as senhas antes de sair.";
            op = -1;
        }
        else
        {
            switch (op)
            {
            case 1:
                // incluir senha na fila, passando a
                // variavel ultimaGerada como parametro
                ultimaGerada++;
                cout << "Senha gerada: " << ultimaGerada << endl;
                cout << endl;
                break;
            case 2:
                if (ultimaGerada == qtdAtendidas)
                {
                    cout << "Nao ha senhas aguardando atendimento." << endl;
                    cout << endl;
                }
                else
                {
                    // tirar senha da fila
                    qtdAtendidas++;
                    cout << "Senha atendida." << endl;
                    cout << endl;
                }
                break;
            default:
                cout << "Opcao invalida." << endl;
                cout << endl;
                break;
            }
        }

    } while (op != 0);

    cout << "Total de senhas atendidas: " << qtdAtendidas << endl;

    return 0;
}