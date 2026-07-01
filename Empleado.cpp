#include<iostream>
#include<string>
using namespace std;
struct Empleado
{
	string nombres;
	float salario;
	int numero;
	float ventas_totales;
	float ventas_mes[12];
};
Empleado E[1000];
int main()
{
	int n, ventas_totales=0,pos_max_ventas=0;
	cout<<"Cantidad de empleados: ";cin>>n;
	
	//Ingreso de datos
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese nombres del empleado "<<i+1<<": ";getline(cin,E[i].nombres);
		cout<<"Ingrese numero del empleado "<<i+1<<": ";cin>>E[i].numero;
		cout<<"Ingrese el salario del empleado "<<i+1<<": ";cin>>E[i].salario;
		
		for(int j=0;j<12;j++)
		{
			cout<<"Ventas del empleado "<<i+1<<" en el mes "<<j+1<<": ";cin>>E[i].ventas_mes[j];
			E[i].ventas_totales+=E[i].ventas_mes[j];	
		} 
		cin.ignore();
	}
	
	
	//Empleado que tuvo las mayores ventas durante el anio
	for(int i=1;i<n;i++)
	{
		if(E[pos_max_ventas].ventas_totales<E[i].ventas_totales)
		{
			pos_max_ventas=i;
		}	
	}
	
	cout<<"DATOS DEL EMPLEADO CON LAS MAYORES VENTAS DEL ANIO"<<endl;
	cout<<"Numero: "<<E[pos_max_ventas].numero<<endl;
	cout<<"Nombres: "<<E[pos_max_ventas].nombres<<endl;
	
	cout<<E[0].ventas_totales;
	
	return 0;
}


