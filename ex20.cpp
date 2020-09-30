#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int regressiva=0,cont;
cout <<"Qual o valor para início da contagem regressiva? ";
cin >>regressiva;
for (cont=regressiva;cont>0;cont--)
{
cout <<cont<<"\n";

}
system("pause");
return 0;
}

