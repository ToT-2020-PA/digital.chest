#include <iostream>
#include <stdlib.h>
#include <locale.h>

// Receba um n�mero qualquer e informe se ele � par ou �mpar.

using namespace std;

int main() {
	setlocale(LC_ALL,"");
int num, num2;
cout<<"Digite um n�mero qualquer, irei analiza-lo se ele � par ou �mpar: "<<endl;
cin>> num;
num2=num%2;
if(num2==0)
{
	cout<<"Este Numero � Par"<<endl;
}
else
{
	cout<<"Este N�mero � �mpar"<<endl;
}
system("pause");
return 0;		
	}


