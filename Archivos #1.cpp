#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

struct ventas
{
	string nombrecliente;
	string apellidocliente;
	string nombrearticulo;
	int cantidad;
	float valoruni;
}ven;

int main ()
{
	float venta, total = 0;
	
	ofstream salida ("Ventas.doc",ios::out);
	salida<<"MERCADO EKR"<<endl<<endl;
	
	cout<<"Ingrese su nombre, apellido, nombre del artículo, cantidad comprada y valor unitario"<<endl;
	
	while(cin>>ven.nombrecliente>>ven.apellidocliente>>ven.nombrearticulo>>ven.cantidad>>ven.valoruni) //El archivo solo lee datos que correspondan al tipo de dato especificado Y EN ESTRICTO ORDEN
	{
		salida<<"Nombre y apellido: "<< ven.nombrecliente<<" "<<ven.apellidocliente<<endl;
		salida<<"Nombre del producto: "<<ven.nombrearticulo<<endl;
		salida<<"Cantidad comprada: "<<ven.cantidad<<endl;
		salida<<"Valor por unidad: "<<ven.valoruni<<endl;		
		venta = ven.valoruni*ven.cantidad;
		total += ven.valoruni*ven.cantidad;
		salida<<"Total a pagar: "<<venta;
		salida<<endl<<"Total en ventas hasta ahora; "<<total<<endl<<endl;
		cout<<"Ingrese datos del nuevo cliente"<<endl;
	}
	
	return 0;
}
