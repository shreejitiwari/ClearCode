print('hello ! I am a simple interest calculator\n')
while True:
    p=float(input('What is the Principal amount :-'))
    t=float(input('What is the time period(in year) :-'))
    r=float(input('What is annual rate :-'))

    print('------------------------------------')
    print('------------------------------------')
    SI=(p*r*t)/100
    A=p+SI



    if p>0 and r>0 and t>0:
        print('Simple Interest = ','',SI)

        if t>1:
            print('Final amount at the end of ', t ,'years = ','',A)
        else:
            print('Final amount at the end of ', t ,'year = ','',A)

    else:
        print('PRINCIPAL INTEREST , TIME PERIOD , ANNUAL RATE SHOULD BE POSITIVE')
        


    print('************----------*************')
    print('************----------*************')
