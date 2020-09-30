#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int limite, cont, num, par=0, impar=0;
	cout<<" Quantas Analises vc quer que eu faça? "<<endl;
    cin>> limite;

  for (cont=1;cont<=limite;cont++)
    { 
    	cout<<"Digite o "<<cont<<"º numero"<<endl;
    	cin>>num;
    	
	if (num%2==0)
     {
		par++; 
     } 
	 else
     {
     	impar++;
	 }
	}
cout << "A quantidade de numeros Pares foi "<<par<<" E a quantidade de numeros Impares foi "<<impar<<"\n";
system("pause");
return 0;
}

