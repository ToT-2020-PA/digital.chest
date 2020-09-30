p1 = float(input('Qual o preço da Mercadoria? R$'))
pds = float(input('Qual o valor do desconto? '))
ds = pds/100
p2 = p1-(p1*ds)
print('O Novo preço do produto com desconto de {:.2f}% é de R${:.2f}'.format(pds,p2))