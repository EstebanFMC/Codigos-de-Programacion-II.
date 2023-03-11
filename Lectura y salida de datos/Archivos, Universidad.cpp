#include <iostream>
#include <fstream>
using namespace std;
	struct alumno{
		long int codigo;
		string nombre;
		string apellido;
		double matricula;
		int semestre;
		
	}alm;
int main ()
{
	ifstream entrada ("universidad.txt", ios::in);
	double matricula_t=0;
	float promedio= 0, contador = 0;
	string nombremayor,apellidomayor;
	double comparador = 0;
	
	cout<<"Nombre  Apellido        Código  Matricula  Semestre"<<endl;   	
	while (entrada>>alm.nombre>>alm.apellido>>alm.codigo>>alm.matricula>>alm.semestre)
	{
		cout<<alm.nombre<<"\t"<<alm.apellido<<"    \t"<<alm.codigo<<"\t "<<alm.matricula<<"\t       "<<alm.semestre<<endl;
		
		if(comparador < alm.matricula)
		{
			comparador = alm.matricula;
			nombremayor = alm.nombre;
			apellidomayor = alm.apellido;
		}
		
		matricula_t += alm.matricula;
		promedio += alm.semestre;
		contador ++;
		
		
		
	}
	promedio = promedio/contador;
	
	ofstream salida ("Informe Rector.doc", ios::out);
	salida << "Persona con la matricula mas alta: "<<nombremayor<<" "<<apellidomayor<<" "<<endl<<"Total en matriculas: "<<matricula_t<<" pesos"<<endl<<"Semestre promedio: "<< promedio;
	return 0;
}
