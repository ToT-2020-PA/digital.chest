rb = float(input('Quanto dinheiro vc tem na carteira? R$ '))
dl = 5.21
er = 4.64
ye = 0.39
lb = 5.44
cp1 = rb/dl
cp2 = rb/er
cp3 = rb/ye
cp4 = rb/lb
print('Com R${:.2f} vc consegue comprar U${:.2f} Dolares'.format(rb,cp1))
print('Com R${:.2f} vc consegue comprar e${:.2f} Euros'.format(rb,cp2))
print('Com R${:.2f} vc consegue comprar Ye${:.2f} Yenes'.format(rb,cp3))
print('Com R${:.2f} vc consegue comprar Lb${:.2f} Libras Esterlinas'.format(rb,cp4))