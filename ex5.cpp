#include <iostream>
#include <stdlib.h>
#include <locale.h>

//Receba um número qualquer e informe se ele é positivo ou negativo

using namespace std;

int main() {
setlocale(LC_ALL,"");
int num1;
cout<<"Digite um numero Qualquer, irei analiza-lo se ele é positivo ou negativo"<<endl;
cin>> num1;
if (num1>0)
{
	cout<<"Esse Numero é Positivo"<<endl;
}
else if (num1<0)
{
	cout<<"Esse Numero é Negativo"<<endl;
}
else
{
	cout<<"Esse número é nulo ou não é um número"<<endl;
}
system("pause");
return 0;	
	}


