#include <iostream>
#include <stdlib.h>
#include <locale.h>

//Receba um n�mero qualquer e informe se ele � positivo ou negativo

using namespace std;

int main() {
setlocale(LC_ALL,"");
int num1;
cout<<"Digite um numero Qualquer, irei analiza-lo se ele � positivo ou negativo"<<endl;
cin>> num1;
if (num1>0)
{
	cout<<"Esse Numero � Positivo"<<endl;
}
else if (num1<0)
{
	cout<<"Esse Numero � Negativo"<<endl;
}
else
{
	cout<<"Esse n�mero � nulo ou n�o � um n�mero"<<endl;
}
system("pause");
return 0;	
	}


