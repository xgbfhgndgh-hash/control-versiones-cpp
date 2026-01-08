#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nombre;
    ofstream archivo("datos.txt");

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    if (archivo.is_open()) {
        archivo << "Nombre ingresado: " << nombre << endl;
        archivo.close();
        cout << "Datos guardados correctamente." << endl;
    } else {
        cout << "Error al crear el archivo." << endl;
    }

    return 0;
}

