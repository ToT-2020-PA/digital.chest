#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
int a = 4;
float b = 1.5;
char c = 'w';

if (a %2 ==1){
    printf("A Variavel A eh um numero Impar\n ");
}else {
    printf("A Variavel A eh um numero par\n ");
}
if (b > 2){
    printf("O numero da Variavel eh: %f\n ", b);
}else {
    printf("O numero da variável eh menor que 2\n ");
}
system("pause");
}
