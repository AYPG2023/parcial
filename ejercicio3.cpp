/*
programa que diga el promedio del arreglo
Anderson Perdomo 
 24/09/2023 
*/

#include <iostream>
using namespace std;
int cantidad, valor, suma = 0, promedio = 0;
int main() {

    cout << "Ingrese cuántas Materias tiene: " << endl;
    cin >> cantidad;

    int arreglo[cantidad];
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese un valor para la Materia " << i << endl;
        cin >> valor;
        arreglo[i] = valor;
        suma += valor;
    }

    if (cantidad > 0) {
        promedio = suma / cantidad;
        cout << "El Promedio De Las Calificaciones es: " << promedio << endl;
    } 

    system("Pause");
    return 0;
}
