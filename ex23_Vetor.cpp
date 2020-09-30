#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL,"");
string nomes[45];
int indice;

for(indice=0;indice<=44;indice++)
{
	cout<<"Digite o nome do "<<indice+1<<"º Aluno: ";
	cin>>nomes[indice];
}
for(indice=0;indice<=44;indice++)
{
	cout<<"O nome do "<<indice+1<<"º aluno é: "<<nomes[indice]<<"\n";
}

system("pause");
return 0;
}

