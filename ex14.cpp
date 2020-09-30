#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int numes;

cout<<"Digite um numero de 1 a 12, quero identificar a que mês ele representa: \n"; cin>>numes;

switch (numes)
{   case 1 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Janeiro.\n"; break;
	case 2 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Fevereiro.\n"; break;
	case 3 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Março.\n"; break;
	case 4 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Abril.\n"; break;
	case 5 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Maio.\n"; break;
	case 6 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Junho.\n"; break;
	case 7 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Julho.\n"; break;
	case 8 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Agosto.\n"; break;
	case 9 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Setembro.\n"; break;
	case 10 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Outubro.\n"; break;
	case 11 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Novembro.\n"; break;
	case 12 : cout<<"O número "<<numes<<" corresponde, numéricamente, ao mês de Dezembro.\n"; break;
	default : cout<<"Opa! o número "<<numes<<" é um número inválido para associar a um mês.\n"; break;}
	
system("pause");
return 0;
}
