//Horacio Moreno Hernandez 3-j
// Practica 08 - Cola C++.cpp 
#include <iostream>
#define MaxTeamC 10

typedef int TipoDato;
using namespace std;

int main()
{
    int frente = 0, final = 0;
    TipoDato A[MaxTeamC];
    int contador = 0;

    //Inicializar la cola
    frente = 0;
    final = 0;

    cout << "Desea agregar elementos a la cola? (s/n): ";
    char respuesta;
    cin >> respuesta;

    while ((respuesta == 's' || respuesta == 's') && contador < 10) {
        if ((final + 1) % MaxTeamC == frente) {
            cout << "Desbornamiento de la cola" << endl; 
            return 1;
        }
        cout << "Ingrese un elemento para la cola: ";
        TipoDato elemento;
        cin >> elemento;

        final = (final + 1) % MaxTeamC;
        A[final] = elemento;

        contador++;
        cout << "Elemento " << contador << "Agregado a la cola: " << elemento << endl;

        if (contador < 10) {
            cout << "Desea agregar mas elementos a la cola? (s/n): ";
            cin >> respuesta;
        }
    }

    //Validar si la cola esta vacia
    if (frente == final) {
        cout << "La cola esta vacia" << endl;
        return 1;
    }

    //Obtener el primer elemento de la cola
    TipoDato primerElemento = A[(frente + 1) % MaxTeamC];
    cout << "El primer elemento de la cola es: " << primerElemento << endl;

    //Eliminar un elemento de la cola
    frente = (frente + 1) % MaxTeamC;

    //Imprimir elementos de la cola en el orden en que fueron ingresados
    cout << "Elemntos de la cola en el orden de ingreso:" << endl;
    for (int i = frente + 1; i <= final; i = (i + i) % MaxTeamC) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}