/*
programa de	Registro de empleados: 
Anderson Perdomo
24/09/2023
*/


#include <iostream>
using namespace std;
bool buscando=false;
int arreglo[9]={1,2,3,4,56,7,8,7,8};
int n;
int main (){
	
	cout<<"Ingrese el dato que Buscas " << endl;
	cin>>n;
	for(int i=0; i<9; i++ ){
	if(n==arreglo[i]){
		cout<<"El Numero Que esta Buscando Esta en la posicion " << i << endl;
		buscando=true;
		break;
	    }// fin de if
	}// fin de arreglo
	
	if(!buscando) {
		
		cout<< " -1 " << endl;
	}
	system("Pause");
	return 0;
}
