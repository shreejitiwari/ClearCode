from ap_recognizer import is_ap , ap_operation
from gp_recognizer import is_gp

while True:

    lst = list(eval(input('Enter a list : ')))
    result_1,cdiff = is_ap(lst)
    result_2,cm_ratio = is_gp(lst)

    if result_1 == True:
        print('The given series is an AP  !!!')
        print('Common Difference = ',cdiff)
        ap_operation(lst)
        print('\n________________________________________________________________________________\n')

    if result_2 == True:
        print('The given series is a GP !!!')
        print('Common ratio = ',cm_ratio)
        
    if result_1 and result_2 == False:
        print('The given series is neither AP nor GP')
    
    print('\n==========================================================================\n')