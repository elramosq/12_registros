#include<iostream>
#include<string>
using namespace std;
struct Atleta
{
	string nombres;
	string pais;
	string disciplina;
	int numero_medallas;
};

Atleta A[1000];
int main()
{
	int n;
	cout<<"Ingrese el numero de atletas: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese los nombres del atleta "<<i+1<<": ";cin>>A[i].nombres;
		cout<<"Ingrese el país del atleta "<<i+1<<": ";cin>>A[i].pais;
		cout<<"Ingrese la disciplina del atleta "<<i+1<<": ";cin>>A[i].disciplina;
		cout<<"Ingrese el numero de medallas del atleta "<<i+1<<": ";cin>>A[i].numero_medallas;
	}
	cout<<endl;
	cout<<"-------------------------------------------";
	string p;
	int pos_mayor_medallas;
	pos_mayor_medallas=0;
	cout<<"\nIngrese el nombre de un pais: ";cin>>p;
	cout<<"\nAtletas de "<<p<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(A[i].pais==p)
		{
			cout<<i+1<<". "<<A[i].nombres<<endl;
		}
		
		if(A[pos_mayor_medallas].numero_medallas<A[i+1].numero_medallas)
		{
			pos_mayor_medallas=i+1;
		}
	}
	
	cout<<"\nAtleta con mayor numero de medallas de "<<p<<endl;
	cout<<A[pos_mayor_medallas].nombres;
		
	return 0;
}
