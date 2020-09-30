#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int regressiva=0;
cout <<"Qual o valor para início da contagem regressiva? ";
cin >>regressiva;
while (regressiva>=0)
{
cout <<regressiva<<"\n";
regressiva--;
}
system("pause");
return 0;
}
