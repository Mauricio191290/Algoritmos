#include<iostream>
using namespace std;
int V[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

int asientos();
int boletos(int b);

int main()
{
	asientos();
}

asientos()
{
	int i,b,faltantes,f,cont=0,z,n;
	char p;
	for (i=1; i<=25; i++)
	{
		cout << "Los asientos disponibles son:" <<i <<endl;
	} 
	do
	{
		cout << "¿La funcion ya comenzo? (Y/N)" <<endl;
		cin >> p;
		if (p == 'N')
		{	
		cout << "¿Cuantos boletos quiere comprar" <<endl;
		cin >> n;
		cont = cont + n;
	for (z=1; z<=n; z++)
	{
		cout << "¿Que boleto quiere comprar?" <<endl;
		cin >> b;
		i = boletos(b);
		V[i] = 0;
	for (i=0; i<=25; i++) 
	{
		if (V[i] != 0)
		cout << "Los asientos disponibles son:" <<V[i] <<endl; 
	} 
	}
	}
	else  (cont = 25);
	}while (cont != 25);
	cout << "Disfrute su funcion" <<endl;
}

boletos(int b)
{
	int disponibles;
	disponibles = b - 1;
	return disponibles;
}
