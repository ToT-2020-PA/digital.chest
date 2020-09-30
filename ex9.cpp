#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int numes; 
const char* resmes;
bool check = false;

cout<<"Digite um numero equivalente a um mês: ";cin>>numes;
if (numes>12)
{
	cout<<"Desculpe mas esse numero refere-se a um mês inválido"<<endl;
}
else if (numes >=1 && numes<=12 && numes == 1)
{
	resmes = "Janeiro";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 2)
{
	resmes = "Fevereiro";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 3)
{
	resmes = "Março";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 4)
{
	resmes = "Abril";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 5)
{
	resmes = "Maio";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 6)
{
	resmes = "Junho";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 7)
{
	resmes = "Julho";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 8)
{
	resmes = "Agosto";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 9)
{
	resmes = "Setembro";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 10)
{
	resmes = "Outubro";
}
else if (numes >=1 && numes<=12 && numes == 11)
{
	resmes = "Novembro";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else if (numes >=1 && numes<=12 && numes == 12)
{
	resmes = "Dezembro";
	cout<<"O Numero "<<numes<<" é equivalente ao mês de "<<resmes<<endl;
}
else
{
}
system("pause");
return 0;	
}
