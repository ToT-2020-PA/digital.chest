#include <iostream>
#include <stdlib.h>
#include <locale.h>

//Receba o valor de um sal�rio e informe se ele � maior ou menor do que o sal�rio m�nimo. Considere o valor de 1000,00 como sendo o m�nimo.

using namespace std;

int main() {
setlocale(LC_ALL,"");
float salario;

cout<<"Digite o Seu Salario Atual: "<<endl;
cin>> salario;

if (salario > 1000)
{
	cout<<"Seu Salario � Maior que o Salario M�nimo"<<endl;
	}	
else
{
	cout<<"Seu Sal�rio � menor que o Sal�rio Minimo"<<endl;
}
system("pause");
return 0;	
	}
