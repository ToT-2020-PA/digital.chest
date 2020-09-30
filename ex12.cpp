#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int c1;

cout<<"Qual sua Idade"<<endl;
cin>>c1;
if (c1>=7 && c1<=12)
{
	cout<<"Categoria Infantil"<<endl;
}
else if (c1>=13 && c1<=17)
{
	cout<<"Categoria Juvenil"<<endl;
}
else if (c1>=18 && c1<=49)
{
	cout<<"Categoria Adulto"<<endl;
}
else if (c1>=50)
{
	cout<<"Categoria Sênior"<<endl;
}
system("pause");
return 0;	
}
