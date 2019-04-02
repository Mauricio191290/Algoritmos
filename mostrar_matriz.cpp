#include <iostream>

using namespace std; 
int M[5][5];
void llenar ();
void mostrar ();

int main(int argc, char** argv) 
{
	llenar();
	mostrar();
}

void llenar()
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		cout << "Ingresar los datos para la posicion" <<i+1 <<"-" <<j+1 <<endl;
		cin >> M[i][j];	
		} 
	}
	
}

