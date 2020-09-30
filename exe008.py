m = float(input('Entre com o comprimento em metros: '))
dm = m*10
cm = m*100
mm = m*1000
dam = m/10
hm = m/100
km = m/1000
print('{} metros,corresponde a:\n {:.2f} cm\n {:.2f} mm\n {:.2f} dm\n {:.2f} dam\n {:.2f} hm\n {:.3f} km'.format(m,cm,mm,dm,dam,hm,km))
