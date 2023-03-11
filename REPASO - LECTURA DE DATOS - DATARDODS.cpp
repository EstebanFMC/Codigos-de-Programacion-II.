#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void codigos (string, string, long int);
void matriculas (string, string, double);
void aumento (string, string, double);

ifstream entrada ("Datardos.txt", ios::in);
ofstream salida ("Salidardos.txt", ios::out);

struct {
	string nombre, apellido;
	long int codigo;
	double matricula;
} obj ;

int main ()
{
	int eleccion = 2;

	cout<<"1. Lectura de códigos"<<endl<<"2. Lectura de matriculas"<<endl<<"3. Actualización de matrículas"<<endl<<"4. Finalizar"<<endl;
	cin>>eleccion;
	
	if (eleccion > 0 && eleccion < 4)
	{
		while(entrada>>obj.nombre>>obj.apellido>>obj.codigo>>obj.matricula)
		{
			//cout << obj.nombre <<"\t"<<obj.apellido << "\t"<<obj.codigo<<endl;
			if(eleccion == 1)
				codigos (obj.nombre, obj.apellido, obj.codigo);
			else if (eleccion == 2)
				matriculas (obj.nombre, obj.apellido, obj.matricula);
			else if (eleccion == 3)
				aumento (obj.nombre, obj.apellido, obj.matricula);
		}
	}
	return 0;
}


void codigos (string nombre, string apellido, long int codigo)
{
	salida << nombre <<"\n"<<apellido << "\n"<<codigo<<endl;
	cout << nombre <<"\n"<<apellido << "\n"<<codigo<<endl;
}

void matriculas(string nombre, string apellido, double matricula)
{
	salida << nombre <<"\n"<<apellido << "\n"<<matricula<<endl;
	cout << nombre <<"\n"<<apellido << "\n"<<matricula<<endl;
}
void aumento(string nombre, string apellido, double matricula)
{
	if (matricula < 2200)
		matricula += matricula * 0.10;
	else if (matricula > 2700)
		matricula -= matricula * .05;
	else
		matricula = matricula;
	salida << nombre <<"\n"<<apellido << "\n"<<matricula<<endl;
	cout << nombre <<"\n"<<apellido << "\n"<<matricula<<endl;
}

