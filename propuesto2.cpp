#include<iostream>
#include<string>
using namespace std;
struct Persona
{
	string nombres;
	int DNI;
	int edad;
};
Persona P[1000];

int main()
{
	int n;
	cout<<"Ingrese el numero de personas: ";cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++)
	{

		cout<<"Nombres de persona "<<i+1<<":";
		getline(cin,P[i].nombres);
		cout<<endl;
		cout<<"DNI de persona "<<i+1<<":";cin>>P[i].DNI;
		cout<<"Edad de la persona "<<i+1<<":";cin>>P[i].edad;
		cin.ignore();
		cout<<endl;
	}
	
	
	
	int cont_mayor_50=0, sum_edades=0;
	
	for(int i=0;i<n;i++)
	{
		sum_edades=sum_edades + P[i].edad;
		if(P[i].edad>50)
		{
			cont_mayor_50=cont_mayor_50 +1;
		}	
	}
	
	cout<<"Cantidad de personas mayores de 50: "<<cont_mayor_50<<endl;
	cout<<"Promedio de edades: "<<float(sum_edades/n)<<endl;
	
			
	
	return 0;
		
}
