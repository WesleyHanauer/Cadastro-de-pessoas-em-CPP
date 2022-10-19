#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
    string sobrenome;
    string telefone;
    string email;
public:
    Pessoa(string nomeIN, string sobrenomeIN, string telefoneIN, string emailIN) {
        this->nome = nomeIN;
        this->sobrenome = sobrenomeIN;
        this->telefone = telefoneIN;
        this->email = emailIN;
    }
    Pessoa(string nomeIN, string sobrenomeIN, string telefoneIN) {
        this->nome = nomeIN;
        this->sobrenome = sobrenomeIN;
        this->telefone = telefoneIN;
    }
    Pessoa(string nomeIN, string sobrenomeIN) {
        this->nome = nomeIN;
        this->sobrenome = sobrenomeIN;
    }
    Pessoa(string nomeIN) {
        this->nome = nomeIN;
    }
    Pessoa() {
    }
    void setNome(string nomeIN) { nome = nomeIN; }
    void setSobrenome(string sobrenomeIN) { sobrenome = sobrenomeIN; }
    void setTelefone(string telefoneIN) { telefone = telefoneIN; }
    void setEmail(string emailIN) { email = emailIN; }
    string getNome() { return nome; }
    string getSobrenome() { return sobrenome; }
    string getTelefone() { return telefone; }
    string getEmail() { return email; }
};

int main()
{
    Pessoa e[10];
    string nome;
    string sobrenome;
    string telefone;
    string email;
    int cont = 1;
    char opcao;

    for (int i = 0; i < 10; i++) {
        cout << "Informe o nome da pessoa numero " << cont << ".\n";
        cin >> nome;
        cout << "\n";
        e[i].setNome(nome);
        cout << "Continuar cadastrando a pessoa " << cont << " ? (s para continuar)\n";
        cin >> opcao;
        cout << "\n";
        if (opcao == 's') {
            cout << "Informe o sobrenome da pessoa numero " << cont << ".\n";
            cin >> sobrenome;
            cout << "\n";
            e[i].setSobrenome(sobrenome);
            cout << "Continuar cadastrando a pessoa " << cont << " ? (s para continuar)\n";
            cin >> opcao;
            cout << "\n";
            if (opcao == 's') {
                cout << "Informe o email da pessoa numero " << cont << ".\n";
                cin >> email;
                cout << "\n";
                e[i].setEmail(email);
                cout << "Continuar cadastrando a pessoa " << cont << " ? (s para continuar)\n";
                cin >> opcao;
                cout << "\n";
                if (opcao == 's') {
                    cout << "Informe o telefone da pessoa numero " << cont << ".\n";
                    cin >> telefone;
                    cout << "\n";
                    e[i].setTelefone(telefone);
                }
            }
        }
        cont++;
    }
    cont = 1;
    for (int i = 0; i < 10; i++) {
        cout << "Nome da pessoa " << cont << ": " << e[i].getNome() << "\n";
        cout << "Sobrenome da pessoa " << cont << ": " << e[i].getSobrenome() << "\n";
        cout << "Email da pessoa " << cont << ": " << e[i].getEmail() << "\n";
        cout << "Telefone da pessoa " << cont << ": " << e[i].getTelefone() << "\n";
        cout << "\n";
        cont++;
    }
}
