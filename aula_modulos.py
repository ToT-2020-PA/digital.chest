from tkinter import *    
import math

def bt_click():
    num = float(ed.get())
    raiz = math.sqrt(num)
    lb3["text"] = "O Resultado é: ",raiz

janela = Tk()
janela.geometry("400x300+300+100")
janela.title("Raiz Quadrada")

lb = Label(janela, text="Vamos Calcular a Raiz Quadrada de um Número? ")
lb.place(x=20, y=10)
lb2 = Label(janela, text="Vamos Lá, digite um número:")
lb2.place(x=20, y=40)
lb3 = Label(janela, text="O Resultado é:")
lb3.place(x=20, y=65)

ed = Entry(janela)
ed.place(x=185, y=40)

bt = Button(janela, width=20, text="OK", command=bt_click)
bt.place(x=170, y=100)

janela.mainloop()