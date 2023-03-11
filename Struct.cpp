#include <iostream>
using namespace std;

struct alumno
{
	char nombre [100];
	long int codigo;
	long int matricula;
	int semestre;	
}; alumno alumno1;

void imprimir (alumno, int, int);

int main() 
{
	int cantidad; 
	cout<<"¿Cuantos alumnos va a ingresar?"<<endl;
	cin>>cantidad;
	for (int i = 0;i < cantidad;i++)
	{
	cout<<"Ingrese el nombre del alumno "<< i+1 <<endl;
	fflush (stdin);
	cin.getline(alumno1.nombre, 100);
	cout<<"Ingrese la matricula del alumno "<<i+1<<endl;
	cin>>alumno1.matricula;
	cout<<"Ingrese el codigo del alumno "<<i+1<<endl;
	cin>>alumno1.codigo;
	cout<<"Ingrese el semestre del alumno "<<i+1<<endl;
	cin>>alumno1.semestre;
	imprimir (alumno1, cantidad, i);
	}
system ("pause");
return 0;
}

void imprimir (alumno alumno1, int cantidad, int i)
{
	for (int j =0; j<1; j++)
	{
	cout<<endl<<"El nombre del alumno "<<i+1<<" es de: "<<alumno1.nombre<<endl; 
	cout<<"El codigo del alumno "<<i+1<<" es de: "<<alumno1.codigo<<endl;
	cout<<"La matricula del alumno "<<i+1<<" es de: "<<alumno1.matricula<<endl; 
	cout<<"El semestre del alumno "<<i+1<<" es de: "<<alumno1.semestre<<endl<<endl; 

	}
	
}
