#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int multiplos=0,lin, col,matriz[3][4];
 for (lin=0;lin<=2;lin++)
 {
 	for (col=0;col<=3;col++)
 	{
 cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"]: ";
 cin >>matriz[lin][col];
 if (matriz[lin][col]%5==0)
 		{
 		multiplos++;
		}
 	}
 }
cout <<"Foram informados "<<multiplos<<" múltiplos de 5.\n";

system("pause");
return 0;
}

