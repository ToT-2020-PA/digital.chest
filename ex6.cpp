#include <iostream>
#include <stdlib.h>
#include <locale.h>

//Receba o valor de um salário e informe se ele é maior ou menor do que o salário mínimo. Considere o valor de 1000,00 como sendo o mínimo.

using namespace std;

int main() {
setlocale(LC_ALL,"");
float salario;

cout<<"Digite o Seu Salario Atual: "<<endl;
cin>> salario;

if (salario > 1000)
{
	cout<<"Seu Salario é Maior que o Salario Mínimo"<<endl;
	}	
else
{
	cout<<"Seu Salário é menor que o Salário Minimo"<<endl;
}
system("pause");
return 0;	
	}
