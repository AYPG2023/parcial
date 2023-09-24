/*
programa de	Registro de empleados: 
Anderson Perdomo
11:26 24/09/2023
*/

#include <iostream>
#include <string>
using namespace std;
int registro;
int main(){
	struct Empleados{
		string nombre;
		string apellido;
		float salario;
		string area;
	};
	
	cout<<"Ingrese Cuantos Empleados quiere Registar " << endl;
	cin>>registro;
	
	Empleados listaempleados[registro];
	for(int i=0; i<registro; i++ ){
		cout<<"No. de Empleado. " << i + 1 << endl;
		cout<<"Ingrese El Nombre del Empleado " << endl;
		cin>>listaempleados[i].nombre;
		cout<<"Ingrese El Apellido " << endl;
		cin>>listaempleados[i].apellido;
		cout<<"Ingrese El Salario Del Empleado : " << endl;
		cin>>listaempleados[i].salario;
		cout<<"Ingrese Area Del Empleado: " << endl;
		cin>>listaempleados[i].area;
	}
	
    cout<<"Registro de Empleados " << endl;
    for (int i = 0; i < registro; i++) {
            cout << "Nombre: " << listaempleados[i].nombre << endl;
            cout << "Apellido: " << listaempleados[i].apellido << endl;
            cout << "Salario: " << listaempleados[i].salario << endl;
            cout << "Departamento: " <<listaempleados[i].area<< endl;
            cout << endl;
        
    }
    system("Puase");
    return 0;
}
