/*
programa que multiplique dos matrices dadas como entrada y muestre la matriz resultante.
Anderson Perdomo
 24/09/2023
*/

#include <iostream>
using namespace std;
int matriz[2][2];
int matriz1[2][2];
int multi=0,multi1=0,contenedor=0;

int main (){
	
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"Ingrese Valores para Matriz 1 De 2x2" << " Posicion " << i << " " << j << endl;
            cin>>matriz[i][j];
		}	
	}//fin de matriz 1
	
	cout<<"Completastes Matriz 1 Ahora Hazlo Con la 2:" << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		cout<<"Ingrese Valores para Matriz 2 De 2x2" << " Posicion " << i << " " << j << endl;
        cin>>matriz1[i][j];
		}
	}//fin de Matriz 2
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
		multi += matriz[i][j];	
		multi1 += matriz1[i][j];	
		}
	}//fin de operacion
	
	contenedor=  multi*multi1;
	cout<<"El valor resultante De las Dos Matricez Es: " << contenedor <<endl; 
	
	system("Pause");
	return 0;
	
	
}
