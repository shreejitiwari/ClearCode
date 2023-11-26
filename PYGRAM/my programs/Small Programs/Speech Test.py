from turtle import speed
import pyttsx3
Engine = pyttsx3.init()
Engine.setProperty('rate',150)
while True:
    text = input('What do you want me to speak : ').lower()
    if text in ('exit','end this program','end'):
        break
    Engine.say(text)
    Engine.runAndWait()

print('Ok, ending the program...')
Engine.say('Ok, ending the program... Press Enter to exit')
Engine.runAndWait()
input()
exit()