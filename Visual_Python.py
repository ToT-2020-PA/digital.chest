from tkinter import *
'''from tkMessageBox import *'''

MainWindow = Tk()
MainWindow.geometry("155x300+150+100")

def Button1Click():
	print ("Hello Visual Python IDE... ")
	
Button1 = Button(text = "Clique Aqui", command = Button1Click)
Button1 .place(relx = 0.5, rely = 0.5, relheight = 0.20)

mainloop()