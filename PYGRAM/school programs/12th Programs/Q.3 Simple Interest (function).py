# FUNCTIONS

#Without arguments

def SI_no_arg():
    global p
    global r
    global t
    SI=(p*r*t)/100
    A=p+SI

    
    print('Simple Interest = ','',SI)

    if t>1:
        print('Final amount at the end of ', t ,'years = ','',A)
    else:
        print('Final amount at the end of ', t ,'year = ','',A)

    
    print('============================================================')
    

#With arguments
    
def SI_arg(pa,rt,tm):
    SI=(pa*rt*tm)/100
    A=p+SI


    print('Simple Interest = ','',SI)

    if t>1:
        print('Final amount at the end of ', tm ,'years = ','',A)
    else:
        print('Final amount at the end of ', tm ,'year = ','',A)

    print('============================================================')



#Without arguments & return
def SI_no_arg_ret():

    SI=(p*r*t)/100
    A=p+SI
    
    return SI,A
    


#With arguments & return

def SI_arg_ret(pa,rt,tm):

    SI=(pa*rt*tm)/100
    A=p+SI
    
    return SI,A
    



# _main_

# INPUT
print('It is a Simple Interest Calculator\n')

p=float(input('What is the Principal amount :-'))
t=float(eval(input('What is the time period(in year) :-')))
r=float(input('What is annual rate :-'))

#RESULT

if p>0 and r>0 and t>0:
        
    #Without Argument

    print('\nUsing Without Argument :')
    SI_no_arg()


    #With argument

    print('\nUsing With Argument :')
    SI_arg(p,r,t)


    #With Argument with return

    print('\nUsing With Argument with return :')
    SI,Amount = SI_arg_ret(p,r,t)

    print('Simple Interest = ','',SI)
    print('Final amount at the end of ', t ,'years = ','',Amount)
    print('\n============================================================')


else:
    print('\nPRINCIPAL INTEREST , TIME PERIOD , ANNUAL RATE SHOULD BE POSITIVE')
