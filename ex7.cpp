#include <iostream>
#include <stdlib.h>
#include <locale.h>

//receba uma hora qualquer (sem os minutos e os zeros) e informe se é dia ou noite. Será dia se a hora estiver entre 6 e 18.

using namespace std;

int main() {
setlocale(LC_ALL,"");
int horaat;
cout<<"Digite uma hora qualquer sem os minutos e os zeros, vamos testar se é dia ou noite"<<endl;
cin>>horaat;
if (horaat >=6 && horaat < 18)
{
	cout<<"Esse é um horario em que ainda é dia"<<endl;
}
else
{
	cout<<"Essa não é uma hora dentro do intervalo do dia, provavelmente é noite"<<endl;
}
system("pause");
return 0;		
	}
