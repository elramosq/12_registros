#include<iostream>
#include<string>
using namespace std;
struct Empleado
{
	string nombres;
	float salario;
	int numero;
	float ventas_totales;
};
Empleado E[1000];
int main()
{
	int n;
	cout<<"Cantidad de empleados: ";cin>>n;
	
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese nombres del empleado "<<i+1<<": ";getline(cin,E[i].nombres);
		cout<<"Ingrese numero del empleado "<<i+1<<": ";cin>>E[i].numero;
		cin.ignore();
	}
	
	return 0;
}


