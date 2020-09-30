from random import randint
from time import sleep
lista = list()
jogos = list()
print ('_' *30)
print (' Jogos para a Quina')
print ('_' *30)
quant = int(input('Quantos Jogos deverão ser sorteados?  '))
tot = 1
while tot <= quant:
    cont = 0
    while True:
        num = randint(1,80)
        if num not in lista:
            lista.append(num)
            cont += 1
        if cont >= 5:
            break
    lista.sort()
    jogos.append(lista[:])
    lista.clear()
    tot += 1
print('-=' * 3, f'SORTEANDO {quant} Jogos ', "-=" * 3)
for i, l in enumerate(jogos):
    print(f'Jogo {i+1}: {l}')
    sleep(0.2)
print('-=' * 3, '< Boa Sorte >', '-=' * 3)

