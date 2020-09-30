n1 = int(input('digite um numero: '))
print('o primeiro nbumero escolhido foi {}'.format(n1))
n2 = int(input('escolha outro numero '))
print('o segundo numero escolhido foi {}'.format(n2))
s = n1+n2
d = n1/n2
m = n1*n2
sb = n1-n2
di = n1//n2
ex = n1**n2
print(' a soma é {}, a divisão é {:0.2f}, a multiplicação é {},'.format(s, d, m), end='')
print(' a Subtração é {}, a Divisão Inteira é {} e a Exponenciação é {}'. format(sb, di, ex))
