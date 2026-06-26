#include<iostream>
#include<string>
using namespace std;
struct Empleado
{
	string nombre;
	string sexo;
	float sueldo;
};

Empleado E[1000];

int main()
{
	int n;
	
	cout<<"Ingrese la cantidad de empleados: ";cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Nombre del empleado "<<i+1<<":";cin>>E[i].nombre;
		cout<<"Sexo del empleado "<<i+1<<":";cin>>E[i].sexo;
		cout<<"Sueldo del empleado "<<i+1<<":";cin>>E[i].sueldo;
	}
	int pos_mayor=0;
	int pos_menor=n-1;
	for(int j=1;j<n;j++)
	{
		if(E[pos_mayor].sueldo<E[j].sueldo)
		{
			pos_mayor=j;
		}
	}
	for(int k=n-1;k>-1;k--)
	{
		if(E[pos_menor].sueldo>E[k].sueldo)
		{
			pos_menor=k;
		}
	}
	cout<<"DATOS DEL EMPLEADO CON MAYOR SUELDO"<<endl;
	cout<<"Nombre: "<<E[pos_mayor].nombre<<endl;
	cout<<"Sexo: "<<E[pos_mayor].sexo<<endl;
	cout<<"Sueldo: "<<E[pos_mayor].sueldo<<endl;
	cout<<"----------------------------------------------"<<endl;
	
	cout<<"DATOS DEL EMPLEADO CON MENOR SUELDO"<<endl;
	cout<<"Nombre: "<<E[pos_menor].nombre<<endl;
	cout<<"Sexo: "<<E[pos_menor].sexo<<endl;
	cout<<"Sueldo: "<<E[pos_menor].sueldo<<endl;
	
	
	return 0;
}
