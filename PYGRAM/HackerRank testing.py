class Solution:
    def isPalindrome(s: str) -> bool:
        new_s = ''
        for i in s:
            if i.isalnum():
                new_s += i.lower()
                
        if new_s == new_s[::-1]:
            print('true')
        else:
            print('false')
                
                
            
Solution.isPalindrome("race a car")