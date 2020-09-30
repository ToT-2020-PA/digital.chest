pythonnome = input('Qual seu nome? ')
saud = input('Olá, tudo Bem? ')
if saud == 'sim':
    num1 = int(input('Digite um numero '))
    print('Vc escolheu o numero', num1)
    print(num1, 'Elevado a potencia de 2 é: ', num1*num1,'vc sabia?')
else:
    resp1 = input('posso lhe ajudar? ') 
resposta = input('Ok, Vc quer continuar? ')
if resposta =='sim':
    num1 = int(input('Digite um numero '))
    print('Vc escolheu o numero', num1)
    print(num1, 'Elevado a potencia de 3 é: ', num1*num1*num1,'vc sabia?')
else:
    print('Ok, nos vemos outra hora então.')

