import tkinter as tk 
import tkinter.ttk as ttk 
import serial.tools.list_ports 
from tkinter import * 
 
 
 
def serial_ports(): 
    return serial.tools.list_ports.comports() 
 
def on_select(event=None): 
 
    print("event.widget:", event.widget.get()) 
 
    print("comboboxes: ", cb.get()) 
 
root = tk.Tk() 
 
root.title("Elec Groupe 11") 
 
root.geometry('350x200') 
label_1 = Label (root, 
                 text="Selecter le port serial du telemetre") 
 
cb = ttk.Combobox(root, values=serial_ports()) 
label_2 = Label (root) 
label_1.pack() 
cb.pack() 
