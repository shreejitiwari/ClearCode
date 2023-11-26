#AP recognizer

def is_ap(series):
    cdlst=[]
    
    n=0
    
    while n<len(series)-1:
        cdiff=series[n+1]-series[n]
        n+=1
        cdlst.append(cdiff)

    cdlst=list(set(cdlst))

    if len(cdlst)==1:
        
        return True,cdlst[0]
        
    else:
        return False,'No common difference !!'



## nth_term(n,series):
def ap_operation(lst):
      n=int(input('\nWhat is the value of  "n" for which you want nth term and sum upto n terms : '))
      result_1,cdiff = is_ap(lst)
      a=lst[0]

      def An():
            A=a+(n-1)*cdiff
            print('\n',n,'th term =  ',A,sep='')
##            return A

      def Sn():
            S=(n/2*(2*a + (n-1)*cdiff))
            if S == float:
##                x=len(S)
##                S=round(S,5)
                    S=format(S)
            print('Sum of ',n,' term =  ',S)
##            return S

      return An() , Sn()

