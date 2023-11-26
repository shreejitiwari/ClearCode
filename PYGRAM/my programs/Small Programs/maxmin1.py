a=int(input("what is your 1st number ?\n"))
b=int(input("what is your 2nd mumber ?\n"))
c=int(input("what is your 3rd number?\n"))

#to find maximum
d=[a,b,c]
d.sort()
print(d)
print('Maximum value is =' ,max(d))
print('Minimum value is =' ,min(d))
print(d[0],",",d[1],',',d[2])
input('press enter to leave')
