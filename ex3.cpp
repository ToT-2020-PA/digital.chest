#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int anoat, anonsc, idade, qtdias, horas;
cout <<"Digite o Ano Atual: ";
cin >> anoat;
cout <<"Digite o ano em que voc� nasceu: ";
cin >> anonsc;
idade = anoat-anonsc;
cout<<"Sua Idade � "<<idade<<" Anos"<<endl;
if (idade>=18)
{
	cout<<"Voc� j� � maior de Idade"<<endl;
}
else
{
	cout<<"Voc� � menor de Idade"<<endl;
}
qtdias = idade*365;
cout<<"Voc� j� viveu "<<qtdias<<" Dias"<<endl;
horas = qtdias*24;
cout<<"Voc� j� viveu "<<horas<<" Horas, at� agora"<<endl;
system("pause");
return 0;	
}


