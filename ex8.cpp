#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
float num1, num2, resultado;
int op;
  cout <<"Informe o 1o. número: "; cin >>num1

  cout <<"Informe o 2o. número: "; cin >>num2;
  cout <<"------------------------------------\n";
  cout <<"Escolha a operação matemática: \n";
  cout <<"1 - Adição\n";
  cout <<"2 - Subtração\n";
  cout <<"3 - Divisão\n";
  cout <<"4 - Multiplicação\n";
  cout <<"Opção: ";
  cin >>op;
  if (op==1)
  {
    resultado=num1+num2;
    cout <<num1 << " + " << num2 << " = " << resultado<<endl;
  }
  else if (op==2)
  {
    resultado=num1-num2;
    cout <<num1 << " - " << num2 << " = " << resultado<<endl;
  }
  else if (op==3)
  {
    resultado=num1/num2;
    cout <<num1 << " / " << num2 << " = " << resultado<<endl;
  }
  else if (op==4)
  {
    resultado=num1*num2;
    cout <<num1 << " * " << num2 << " = " << resultado<<endl;
  }
  else
  {
    cout <<"Opção inválida!!!"<<endl;
  }	
system("pause");
return 0;	
}
