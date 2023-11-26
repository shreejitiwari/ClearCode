while True:

    pht=int(input('Please enter the required height of the pyramid (in +ve integer) : '))
    pchar=str(input('Please choose the character you want to print in the form of Pyramid : '))
    
    
    print('\n\nPYRAMID : \n\n')

    n=1

    for i in range(pht,0,-1):
        print(' '*i*int(len(pchar)+1),(pchar+' ')*int(n))
        n+=2

    print('\n\n')
    
