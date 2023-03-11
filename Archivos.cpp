#include <iostream>
#include <fstream>
using namespace std;

/*Elaborar un programa en C++, que le permita a una inmobiliaria almacenar los datos de
	algunas edificaciones que maneja. Para ello, debe tener en cuenta los siguientes
	aspectos:
	? Se debe aplicar el concepto de Archivos.
	? Los datos de cada edificaci�n son: direcci�n, �rea construida, �rea lote, c�dula del
	due�o, c�dula catastral, precio, barrio.
	? Se deben almacenar los datos de cada vivienda en un archivo.
	? Al ejecutar el programa se debe mostrar los datos de una edificaci�n espec�fica, dada
	la c�dula catastral*/
struct vivienda
{
string direccion;
double area_construida,area_lote, precio;
long int cedula, castral;
string barrio;
}p1;



int main() 
{
	
	ofstream salida("obras.txt",ios::out);
	cout<<"Ingrese en estricto orden; direcci�n, �rea construida, �rea lote, c�dula del due�o, c�dula catastral, precio, barrio o introduzca 0 para terminar."<<endl;
	cin>>p1.barrio;
	if (p1.barrio =="0")
	{
		return 0;
	}
	while (cin>>p1.direccion>>p1.area_construida>>p1.area_lote>>p1.cedula>>p1.castral>>p1.precio>>p1.barrio)
		{
			salida<<"Direcci�n: "<<p1.direccion<<endl<<"Area construida: "<<p1.area_construida<<endl<<"Area del lote: "<<p1.area_lote<<endl<<"Cedula del due�o: "<<p1.cedula<<endl<<"Cedula Catastral: "<<p1.castral<<"Barrio: "<<p1.barrio<<endl; 
			cout<<"Ingrese los datos del siguiente cliente o introduzca 0 para terminar"<<endl;
		}
	
	return 0;
}

