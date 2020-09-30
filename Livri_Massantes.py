import webbrowser, sys
import pyperclip

if len(sys.argv) > 1:
    address = ' '.join(sys.argv[1:])
else:
    address = pyperclip.paste()

webbrowser.open('http://www.google.com.br/maps/place/'+ address)
