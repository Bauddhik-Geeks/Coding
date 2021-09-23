#Factorial using recursive method
def factorial(n):
    if n <0:
        return "undefined"
    if n < 2:
        return 1
    return n * factorial(n-1)
print(factorial(10))    