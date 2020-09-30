#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int num, quadrado;
cout <<"Informe um número qualquer: ";
cin >> num;
quadrado=num*num;
if (quadrado>=25)
{
	cout <<"O quadrado deste numero é maior ou igual a 25!"<<endl;
} else
{
 cout <<"O Quadrado deste número é menor que 25!"<<endl;		
}
system("pause");
return 0;
}
