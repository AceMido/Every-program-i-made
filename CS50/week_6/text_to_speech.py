import pyttsx3


engine = pyttsx3.init()

name=input("whats your name? ")

engine.say(f"hello {name} ")  
engine.runAndWait()

