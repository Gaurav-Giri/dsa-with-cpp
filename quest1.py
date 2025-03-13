import math

# principal = float(input("Enter the principal amount: "))
# rate = float(input("enter the rate of intrest: "))
# time = float(input("Enter the time of deposit: "))

# simpleIntrest  = (principal*rate*time)/100
# print(f"Simple Interest: {simpleIntrest:.2f}")

# max of two numbers
# num_1 = int(input("Enter the first number: "))
# num_2 = int(input("Enter the second number: "))

# if num_1 > num_2:
#     print(f"{num_1} is greater")
# elif num_1 < num_2:
#     print(f"{num_2} is greater")
# else :
#     print("both numbers are equal")

#factorial of n


def factorial_iterative(n):
    fact = 1
    for i in range (1, n + 1):
        fact *= i
    return fact

n = int (input("enter a number: "))

if n < 0:
    print("factorial is not defined for negative numbers! ")
else:
    print(f"factorial of {n} is {factorial_iterative(n)}")


