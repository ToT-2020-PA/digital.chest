#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int anoAtual, anoNasc, idade;
cout <<"Ano atual: ";
cin >> anoAtual;
cout <<"Ano de nascimento:";
cin >> anoNasc;
idade=anoAtual-anoNasc;
cout <<"Voc� tem ou far� " << idade << " anos.";
if (idade>=16)
{
cout <<" Voc� j� pode votar!"<<endl;
}
system("pause");
return 0;
}
