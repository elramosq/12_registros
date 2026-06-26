#include<iostream>
using namespace std;
struct Persona
{
	string nombre;
	int dia_nacimiento;
	int mes_nacimiento;
	int anio_nacimiento;
};

Persona P[1000];
int main()
{
	int num, n;
	cout<<"Ingrese el numero de personas: ";cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el nombre de la persona "<<i+1<<": ";cin>>P[i].nombre;
		cout<<"Ingrese el dia de nacimiento de de la persona "<<i+1<<": ";cin>>P[i].dia_nacimiento;
		cout<<"Ingrese el mes de nacimiento de la persona "<<i+1<<": ";cin>>P[i].mes_nacimiento;
		cout<<"Ingrese el anio de nacimiento de la persona "<<i+1<<": ";cin>>P[i].anio_nacimiento;
	}
	
	cout<<"Ingrese un numero de mes o ingrese 0 para finalizar:";cin>>num;


	while(num!=0)
	{
		cout<<"DATOS DE LAS PERSONAS"" QUE CUMPLEN EN EL MES "<<num<<endl;
		for(int i=0;i<n;i++)
		{
			if(P[i].mes_nacimiento==num)
			{
				cout<<"Persona "<<i+1<<endl;
				cout<<"Nombre: "<<P[i].nombre<<endl;
				cout<<"Dia de nacimiento: "<<P[i].dia_nacimiento<<endl;
				cout<<"Mes de nacimiento: "<<P[i].mes_nacimiento<<endl;
				cout<<"Anio de nacimiento: "<<P[i].anio_nacimiento<<endl;
			}
		}
		
		
	cout<<"Ingrese un numero de mes o ingrese 0 para finalizar:";cin>>num;

		
	}
	
	return 0;
}
