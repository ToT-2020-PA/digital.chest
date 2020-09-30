#include <iostream>
#include <stdlib.h>
#include <locale.h>

// Receba um número qualquer e informe se ele é par ou ímpar.

using namespace std;

int main() {
	setlocale(LC_ALL,"");
int num, num2;
cout<<"Digite um número qualquer, irei analiza-lo se ele é par ou ímpar: "<<endl;
cin>> num;
num2=num%2;
if(num2==0)
{
	cout<<"Este Numero é Par"<<endl;
}
else
{
	cout<<"Este Número é Ímpar"<<endl;
}
system("pause");
return 0;		
	}


