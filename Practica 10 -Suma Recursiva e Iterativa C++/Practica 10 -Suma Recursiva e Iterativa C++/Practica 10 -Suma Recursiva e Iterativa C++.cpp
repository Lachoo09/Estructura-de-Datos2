// Practica 10 -Suma Recursiva e Iterativa C++.cpp 
// Horacio Moreno Hernandez 3-J

#include <iostream>
using namespace std;

int SumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return SumaRecursiva(n / 10) + n % 10;
}

int SumaIterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    suma += n;
    return suma;
}


int main() {
    int OP, NUM;

    cout << "Digite un numero para la suma: ";
    cin >> NUM;

    cout << "Escoga una de las dos opciones (1 para suma recursiva, 2 para suma iterativa): ";
    cin >> OP;


    if (OP == 1) {
        cout << "Resultado: " << SumaRecursiva(NUM) << endl;
    }
    else if (OP == 2) {
        cout << "Resultado: " << SumaIterativa(NUM) << endl;
    }
    else {
        cout << "Error, vuelve a escribir la opcion." << endl;
    }
    
    return 0;
}