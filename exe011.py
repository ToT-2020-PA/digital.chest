lg = float(input('Me informe, por favor, a Largura, em metros, do espaço a ser pintado: '))
at = float(input('OK, Me informe agora, por favor, a altura, em metros, do espaço a ser píntado: '))
ar = lg*at
qt = ar/2
print('Para pintar {:.2f} m², vc precisará de {:.2f} litros de tinta'.format(ar,qt))
