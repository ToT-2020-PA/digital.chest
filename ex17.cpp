#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int num, contador, res;
contador = 1;
cout<<"Você deseja ver a Tabuada de que Numero?: \n";
cin>>num;
do
{
	res = num * contador;
	cout<<" "<<num<<" X "<<contador<<" = "<<res<<"\n";
	contador++;
} while (contador<=10);
system("pause");
return 0;
}
