n1 = float(input('Informe a primeira nota do Aluno: '))
n2 = float(input('Informe a segunda nota do Aluno: '))
m = ((n1+n2)/2)
print(' A média obtida pelo aluno foi de {:0.2f}'.format((n1+n2)/2))
if m >= 7:
    print('O Aluno foi aprovado')
else:
    print('O Aluno foi Reprovado, infelizmente')
