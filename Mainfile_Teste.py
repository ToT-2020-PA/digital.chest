# !/usr/bin/env python
# -*- coding: utf-8 -*-
#
# file: mainfile.py
#
# Criado por Sprintpy
#

import tkinter.messagebox as tkmsg
import os
from pathlib import Path
from os.path import join, dirname
import tkinter as tk
import gettext
import locale
import configparser
from tkinter import ttk
import sys
import tkinter.filedialog as fdlg
import logging
from PIL import ImageTk, Image
from tkinter import font
from sys import platform
import tkinter.colorchooser
#import tkbasicdialog

_ = gettext.gettext

class myApp:
    def __init__(self, **kw):
        self.root = tk.Tk()
        self.root.title('Minha aplicação fantástica')
        self.root.geometry('800x600')
        self.create_menu()
        self.create_canvas_area()

    def create_canvas_area(self):
        self.mainframe = ttk.Frame(master=self.root)



        self.mainframe.pack()

    def create_menu(self):
        menu_bar = tk.Menu(self.root)
        self.file_menu = tk.Menu(menu_bar, tearoff=0)
        self.file_menu.add_command(label=_("Exit"), command=self.finaliza_software)
        menu_bar.add_cascade(label=_("File"), menu=self.file_menu)

        self.root.config(menu=menu_bar)

    def finaliza_software(self):
        self.root.quit()


    def execute(self):
        self.root.mainloop()


    #def main(args):
    #    app_proc = myApp()
    #    app_proc.execute()
    #    return 0

