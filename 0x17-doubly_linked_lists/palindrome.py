
def reverse(string): 
    string = string[::-1] 
    return string 

def is_palindrome(num):
    num_str = str(num)
  
    if (num_str == reverse(num_str)): 
        return True
    return False

highest = 0
fir = 0
sec = 0

for x in range(100, 1000):
    for y in range(100, 1000):
        if (x * y > highest and is_palindrome(x * y)):
            highest = x * y
            fir = x
            sec = y

print("{} = {} x {}".format(highest, fir, sec))