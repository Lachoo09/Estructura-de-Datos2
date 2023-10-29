// Practica 11 Ejercicios de Recursividad e Iteración C++.cpp 
// Horacio Moreno Hernandez 3-J

#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, I, RESULT;
    string linea;

    cout << "DIGITE NUMERO: ";
    cin >> linea;
    NUM = stoi(linea);

    I = 1;
    while (I <= 12) {
        RESULT = NUM * I;
        cout << NUM << " * " << I << " = " << RESULT << endl;
        I = I + 1;
    }

    cout << "Pulse una tecla: ";
    cin.get();

    return 0;
}