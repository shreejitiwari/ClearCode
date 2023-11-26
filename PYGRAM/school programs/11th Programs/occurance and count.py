while True:
      lst=input('Enter a list of integers : ')
      lst=lst.split(',')
      elem=input('Enter the element you want to search in the list :  ')

      cnt_lst=[]
      count=1
      for i in  lst:
            if i==elem:
                  cnt_lst.append(count)
            count+=1

      if len(cnt_lst)==0:
            print('\nThe entered element is not found in the list')
      else:
            print('\nThe entered element ','"',elem,'"',' is found in the list at ',end='')

            for j  in cnt_lst[0:len(cnt_lst)-1]:
                  print(j,end=' , ')
                  
            print(' and ',cnt_lst[len(cnt_lst)-1],' position')
            
    
            
            print('\nTotal number of occurance of ','"',elem,'"',' in the list : ',len(cnt_lst))
    
      print('\n\n')