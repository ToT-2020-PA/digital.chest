#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int numes;

cout<<"Digite um numero de 1 a 12, quero identificar a que m�s ele representa: \n"; cin>>numes;

switch (numes)
{   case 1 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Janeiro.\n"; break;
	case 2 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Fevereiro.\n"; break;
	case 3 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Mar�o.\n"; break;
	case 4 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Abril.\n"; break;
	case 5 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Maio.\n"; break;
	case 6 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Junho.\n"; break;
	case 7 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Julho.\n"; break;
	case 8 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Agosto.\n"; break;
	case 9 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Setembro.\n"; break;
	case 10 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Outubro.\n"; break;
	case 11 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Novembro.\n"; break;
	case 12 : cout<<"O n�mero "<<numes<<" corresponde, num�ricamente, ao m�s de Dezembro.\n"; break;
	default : cout<<"Opa! o n�mero "<<numes<<" � um n�mero inv�lido para associar a um m�s.\n"; break;}
	
system("pause");
return 0;
}
