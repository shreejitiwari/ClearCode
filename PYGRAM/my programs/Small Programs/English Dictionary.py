from PyDictionary import PyDictionary

x=str(input("What is your word ??\n"))
d=PyDictionary()

M= d.meaning(x)
print("MEANING : \n", M)
print("_______________________")
print("_______________________")
print("_______________________")
print("_______________________")
print("_______________________")

S=d.synonym(x)
print("SYNONYM : \n" , S)
print("_______________________")
print("_______________________")
print("_______________________")
print("_______________________")
print("_______________________")

A=d.antonym(x)
print("ANTONYM : \n" , A)
print("_______________________")
print("_______________________")
print("_______________________")
print("_______________________")
print("_______________________")

L=d.translate(x, 'hi')
print("IN HINDI : \n" , L)
