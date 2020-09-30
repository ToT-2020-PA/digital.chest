dias = float(input('Quantos dias vc usou o carro?: '))
kms = float(input('Quantos Kilometros vc percorreu?: '))
pçoPg = (60*dias)+(kms*0.15)
print(' O preço a pagar pelo aluguel do veículo é de R${:.2f}'.format(pçoPg))
