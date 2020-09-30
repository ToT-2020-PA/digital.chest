#include <iostream>
#include <stdlib.h>
#include <locale.h>
/* Uma lanchonete está disponibilizando para seus clientes um terminal por meio do qual poderão fazer os pedidos. 
Para que isso aconteça, o terminal deve exibir o menu de itens disponíveis conforme se vê a seguir:

*** Cardápio ***
100 – Hambúrguer – R$5,50
101 – Cachorro-quente – R$4,50
102 – Milkshake – R$7,00
103 – Pizza brotinho – R$8,00
104 - Cheeseburguer – R$8,50
Informe o código do seu pedido:

Uma vez que o cliente informe o código do item desejado, o terminal deverá perguntar a quantidade de itens que ele deseja pedir. 
Ao final, o terminal deverá informar o pedido do cliente e o valor a pagar.
Escreva o algoritmo e seu equivalente em C++ que possam resolver o problema da lanchonete. Utilize as estruturas CASO e SWITCH. */


using namespace std;

int main() {
setlocale(LC_ALL,"");
int qtpedido, pedido;
float vlrpedido;

cout<<"*****************************\n";
cout<<"    *** Cardápio ***\n";
cout<<"100 – Hambúrguer – R$5,50\n";
cout<<"101 – Cachorro-quente – R$4,50\n";
cout<<"102 – Milkshake – R$7,00\n";
cout<<"103 - Pizza brotinho - R$8,00\n";
cout<<"104 - Cheeseburguer – R$8,50\n";
cout<<"*****************************\n";
cout<<"Informe o código do seu pedido: \n";
cin>>pedido;
cout<<"*****************************\n";
cout<<"Informe a quantidade desejada: \n";
cin>>qtpedido;
cout<<"*****************************\n";

switch (pedido)
{ 
case 100: vlrpedido = (qtpedido*5.50); cout<<"Você escolheu "<<qtpedido<<" Hamburguer no valor total de R$"<<vlrpedido<<endl;break;
case 101: vlrpedido = (qtpedido*4.50); cout<<"Você escolheu "<<qtpedido<<" Cachorro Quente no valor total de R$"<<vlrpedido<<endl;break;
case 102: vlrpedido = (qtpedido*7.00); cout<<"Você escolheu "<<qtpedido<<" MilkShake no valor total de R$"<<vlrpedido<<endl;break;
case 103: vlrpedido = (qtpedido*8.00); cout<<"Você escolheu "<<qtpedido<<" Pizza Brotinho no valor total de R$"<<vlrpedido<<endl;break;
case 104: vlrpedido = (qtpedido*8.50); cout<<"Você escolheu "<<qtpedido<<" Cheeseburguer no valor total de R$"<<vlrpedido<<endl;break;
default: cout<<pedido<<" é um Código de produto Inválido\n";
}
system("pause");
return 0;
}
