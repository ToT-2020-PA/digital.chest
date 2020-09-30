#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int anoat, anonsc, idade, qtdias, horas;
cout <<"Digite o Ano Atual: ";
cin >> anoat;
cout <<"Digite o ano em que você nasceu: ";
cin >> anonsc;
idade = anoat-anonsc;
cout<<"Sua Idade é "<<idade<<" Anos"<<endl;
if (idade>=18)
{
	cout<<"Você já é maior de Idade"<<endl;
}
else
{
	cout<<"Você é menor de Idade"<<endl;
}
qtdias = idade*365;
cout<<"Você já viveu "<<qtdias<<" Dias"<<endl;
horas = qtdias*24;
cout<<"Você já viveu "<<horas<<" Horas, até agora"<<endl;
system("pause");
return 0;	
}


