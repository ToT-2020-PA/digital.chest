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
cout <<"Você tem ou fará " << idade << " anos.";
if (idade>=16)
{
cout <<" Você já pode votar!"<<endl;
}
system("pause");
return 0;
}
