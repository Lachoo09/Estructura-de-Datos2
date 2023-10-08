//Horacio Moreno Hernandez 3-J LSC
//Practica 06 - Vectores

#include <iostream>
#include <vector>

using namespace std;
int main() {

	vector<string> aves = { "Loro gris", "Paloma de diamante", "Coctel" };
	cout << "Los Valores del vector angtes de insertar:\n";

	for (int i = 0; i < aves.size(); ++i) {
		cout << aves[i] << " ";
	}

	cout << "\n";
	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatua");
	cout << "Los valores del vector despues de insertar:\n";

	for (int i = 0; i < aves.size(); ++i) {
		cout << aves[i] << " ";
	}

	cout << "\n";

	return 0;
}