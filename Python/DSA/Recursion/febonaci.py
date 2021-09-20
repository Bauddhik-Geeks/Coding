'''
Problem Statement:

he Fibonacci sequence is defined as follows: the first number of the sequence is 0, the 
second number is 1 and the nth number is the sum of the (n - 1)th and (n - 2)th numbers. Write a 
function that takes in an integer n and returns the nth Fibonacci number

'''

'''
Approach:
0 1 1 2 3 5 
--> if n==1 return n
--> if n==2 return 2
--> else (n-1) + (n-2) 

'''
def febonaci(n):
    if n<=1:
        return n
    elif n == 2:
        return 1
    else:
        return(febonaci(n-1) + febonaci(n-2) )
    
num = int(input("Enter the number"))

if num<=0:
    print("Invalid Number")
else:
    for i in range (num):
        print(febonaci(i))
    