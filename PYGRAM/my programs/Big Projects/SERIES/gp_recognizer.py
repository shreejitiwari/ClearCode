def is_gp(series):
    
    cmr_lst = []
    for i in range(1,len(series)):
        cm_ratio = series[i]/series[i-1]
        cmr_lst.append(cm_ratio)
    cmr_lst = list(set(cmr_lst))
    
    if len(cmr_lst)==1:
        return True,cm_ratio
    else:
        return False,'No common ratio !!!'
    

def gp_operation(series):
    a = series[0]
    global cm_ratio
    n=int(input('\nWhat is the value of  "n" for which you want nth term and sum upto n terms : '))

    An = a*(cm_ratio**(n-1))
    print(n,'th term of given series = ',An)