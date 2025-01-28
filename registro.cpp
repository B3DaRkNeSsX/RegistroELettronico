#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
    string nomeUtente = "ciao12";
    string utenteInserito;
    string passwordUtente = "password1234";
    string passwordInserita;
    
    enum CLASSE {Classe1 = 1, Classe2, Classe3, Classe4, Classe5};
    int sceltaClasse;
    
    cout << "Inserisci nome utente e password per accedere al registro.\n\n";
    cout << "Nome Utente: ";
    cin >> utenteInserito;
    cout << "Password: ";
    cin >> passwordInserita;
    
    while(true) {
        if (nomeUtente == utenteInserito && passwordUtente == passwordInserita) {
            cout << "\n-- REGISTRO CLOUD 9 --\n\n";
            cout << "1. Classe 4F\n";
            cout << "2. Classe 2H\n";
            cout << "3. Classe 5B\n";
            cout << "4. Classe 3C\n";
            cout << "5. Classe 4K\n";
            cout << "Seleziona una classe da visualizzare: ";
            
            cin >> sceltaClasse;
            
            switch (sceltaClasse) {
                case Classe1:
                    cout << "porno1";
                break;
                case Classe2:
                    cout << "porno2";
                break;
                case Classe3:
                    cout << "porno3";
                break;
                case Classe4:
                    cout << "porno4";
                break;
                case Classe5:
                    cout << "porno5";
                break;
                default:
                    cout << "Classe inesistente";
                break;
            }
            
            break;
        }
        else {
            cout << "Credenziali errate, inseriscile di nuovo.\n\n";
            cout << "Nome Utente: ";
            cin >> utenteInserito;
            cout << "Password: ";
            cin >> passwordInserita;
        }
    }
    
    return 0;
}
