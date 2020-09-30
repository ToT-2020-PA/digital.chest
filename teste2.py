from tkinter import *
from tkinter import messagebox
window = Tk
window('tk::PlaceWindow %s center' % window.winfo_toplevel)
window.withdraw

messagebox.showinfo('Aviso', 'Você Pode Clicar no Botão OK')

window.deiconify
window.destroy
window.quit