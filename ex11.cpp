#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int l1, l2,l3;

cout<<"Digite os 3 Lados de um Triangulo: ";cin>> l1>>l2>>l3;
if (l1==l2 && l2==l3 && l1==l3)
{
	cout<<"Equilatero"<<endl;
}
else if (l1==l2||l2==l3||l1==l3)
{
	cout<<"Escaleno"<<endl;
}
else
{
	cout<<"Isósceles"<<endl;
}
system("pause");
return 0;		
}
