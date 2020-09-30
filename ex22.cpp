#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int fibonacci=0, termo_anterior=0, termo_atual=1, cont, qtdeTermos=0;
 cout <<"Quantos termos da série de Fibonacci deseja ver? ";
 cin >>qtdeTermos;
 cout <<"Os termos são: \n"<<termo_anterior<<termo_atual;
 for (cont=1;cont<=qtdeTermos;cont++)
 {
 fibonacci=termo_anterior+termo_atual;
 termo_anterior=termo_atual;
 termo_atual=fibonacci;
 cout <<fibonacci;
 }
system("pause");
return 0;
}

