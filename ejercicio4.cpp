 /*
programa que tome dos matrices como entrada, las sume y luego muestre la matriz resultante.
Anderson Perdomo 
 24/09/2023
*/

#include <iostream>
using namespace std;

int matriz[2][2];
int matriz1[2][2];
int suma=0,suma1=0,contenedor;
int main (){

    for(int i=0; i<2; i++){
    	for(int j=0; j<2; j++){
    cout<<"Ingrese Valores para Matriz 1 De 2x2" << " Posicion " << i << " " << j << endl;
    cin>>matriz[i][j];
		}		
	}//fin de matriz 1
	cout<<"acabas de LLenar Matriz 1 Ahora Te toca la 2 " << endl;
	cout<<""<< endl;
	
	for(int i=0; i<2; i++ ){
	    for(int j=0; j<2; j++){
	  cout<<"Ingrese Valores para Matriz 2 De 2x2" << " Posicion " << i << " " << j << endl;
      cin>>matriz1[i][j];
	    }
	}
	 for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            suma += matriz[i][j];
            suma1 += matriz1[i][j];
        }
    }

    contenedor = suma + suma1;
    cout << "La suma de las Matrices es: " << contenedor << endl;

    system("Pause");
    return 0;
}
