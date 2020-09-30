#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL,"");
int num=10;

while (num<=100)
{
cout <<num<<" Serão acrescentados +10 ao próximo numero\n";
num+=10;
}
system("pause");
return 0;
}

