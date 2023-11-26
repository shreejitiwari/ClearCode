import ast

try:
    code_dict = ast.literal_eval(input('Enter the code :-\n'))
    pass_key=int(input('\nEnter the pass key :-'))
    ##code_dict[1] = 

    code_str = ''
    decode_dict = dict()
    cnt=1

    for cdword in code_dict:
        for cdchar in code_dict[cdword]:
            code_str = code_str + str(chr(int(cdchar) - int(pass_key*0.0024)))
        decode_dict[cnt] = code_str
        cnt+=1
        code_str=''
        
    print('\nThe message is :- \n')

    for indx in decode_dict:
        code_str+= decode_dict[indx]+' '

    print(code_str)

except:
    print('You have entered an INVALID PASS_KEY......!!!')
    exit()
    
