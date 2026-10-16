#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Ingrese una contraseña: ";
    cin >> password;

    bool reglaLongitud = false;
    bool reglaMayuscula = false;
    bool reglaNumero = false;
    bool reglaEspecial = false;

    // longitud
    if (password.length() >= 8) {
        reglaLongitud = true;
    }

    // Recorrido de cada caracter
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];

        // mayúscula
        if (c >= 'A' && c <= 'Z') {
            reglaMayuscula = true;
        }

        // número
        if (c >= '0' && c <= '9') {
            reglaNumero = true;
        }

        // caracter especial
        if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*') {
            reglaEspecial = true;
        }
    }

    // Suma de las reglas 
    int puntaje = reglaLongitud + reglaMayuscula + reglaNumero + reglaEspecial;

    if (puntaje <= 2) {
        cout << "DÉBIL" << endl;
    } else if (puntaje == 3) {
        cout << "MEDIA" << endl;
    } else if (puntaje == 4) {
        cout << "FUERTE" << endl;
    }

    return 0;
}
