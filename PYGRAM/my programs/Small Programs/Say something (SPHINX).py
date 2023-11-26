import speech_recognition as sr
import pyaudio as pa


r = sr.Recognizer()


with sr.Microphone as source:
        print("SAY SOMETHING")
        audio = r.listen(source,timeout=1,phrase_time_limit=10)
        print("RECOGNIZING")
        try:
            txt = r.recognize_sphinx(audio)
            print("YOU SAID : " +txt)
        except sr.UnknownValueError:
             print("Oopsi!!!!!!! didn't catch that. Please try again")
input("press ENTER")
