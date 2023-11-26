#FUNCTION
def lst_avg(lst):
    lst_sum = 0
    for num in lst:
        if type(num) == int or type(num) == float :
            lst_sum += num
    
    avg = lst_sum/len(lst)
    return avg

#_main_
print("This is a program to find average of numbers of a list\n")
lst = list(eval(input("Enter a list of numbers : ")))

avg = lst_avg(lst)
print("Average of",lst,"=",avg)