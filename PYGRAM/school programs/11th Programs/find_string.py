while True:
    sen='''India , officially the Republic of India , is a country in South Asia . 
    It is the second most populous country , the seventh largest country by land area
    and the most populous democracy in the world . '''

    print(sen,'\n=========================================================================================')
    word=input('What word you want to search : ')

    count=0

    for i in sen.split():
        count+=1
        if word==i:
            print('\'',i,'\'','Keyword found on',count,'position')
            
    print('\n')
