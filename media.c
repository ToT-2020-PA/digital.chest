#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
int a, b, c, result;
printf("Digite 3 numeros \n");
scanf("%d %d %d",&a, &b, &c);
result = (a*b*c);
printf("O resultado da multiplicação dos números  %d %d e %d, é: %d\n", a, b, c, result);
system("pause");
}
