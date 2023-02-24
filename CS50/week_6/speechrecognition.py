import speech_recognition as sr
import pyttsx3
engine=pyttsx3.init()
rec= sr.Recognizer()




while (True):
    #src=microphone
    with sr.Microphone() as src:
        print("say something.....")
        audio=rec.listen(src)
        text=rec.recognize_google(audio)

    if text in "hello":
        engine.say("hello mohamed,how are you")
        engine.runAndWait()
    elif text in ["i am fine","good"]:
        engine.say("nice to hear that")
        engine.runAndWait()