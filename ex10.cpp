#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int numes; 
const char* resmes;
bool check = false;

cout<<"Digite um numero equivalente a um m�s: ";cin>>numes;
if (numes == 1)
{resmes = "Janeiro";}
else if (numes == 2)
{resmes = "Fevereiro";}
else if (numes == 3)
{resmes = "Mar�o";}
else if (numes == 4)
{resmes = "Abril";}
else if (numes == 5)
{resmes = "Maio";}
else if (numes == 6)
{resmes = "Junho";}
else if (numes == 7)
{resmes = "Julho";}
else if (numes == 8)
{resmes = "Agosto";}
else if (numes == 9)
{resmes = "Setembro";}
else if (numes == 10)
{resmes = "Outubro";}
else if (numes == 11)
{resmes = "Novembro";}
else if ( numes == 12)
{resmes = "Dezembro";}
else
{cout<<"M�s Inv�lido"<<endl; check = true;}
if (!check)
{cout<<"O Numero "<<numes<<" � equivalente ao m�s de "<<resmes<<endl;}
system("pause");
return 0;	
}
