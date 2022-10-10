def prime_checker(n):
    prime = True
    for i in range (2, n):
        if n % i == 0:
            prime = False
    if prime:
        print("Prime number")
    else:
        print("Not a Prime number")

number = int(input("Check this number: "))
prime_checker(n = number)