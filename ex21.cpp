#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int desenha,totLinhas,linAtual;
 cout <<"Quantas linhas deve ter o triângulo? ";
 cin >>totLinhas;
 for (linAtual=1;linAtual<=totLinhas;linAtual++)
 {
 cout <<"\n";
 for (desenha=1;desenha<=linAtual;desenha++)
 {
 cout <<"*";
 }
 }
system("pause");
return 0;
}

