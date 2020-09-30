#python 3.7.1
#ToT_Pa
def MegaSena():
    import random
    NumJog = (int(input("quantos jogos? ")))
    n = 1
    while (n <= NumJog):
        r = random.sample(range(1, 61), 6)
        print('Jogo:', n, '-', r)
        n += 1
pass