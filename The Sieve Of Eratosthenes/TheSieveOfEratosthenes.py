import math

def isPrime(num):
    sqrt = int(math.sqrt(num))+1
    for i in range(2, sqrt):
        if num%i==0: return False
    return True

def getPrimeNumbers(n):
    nums = [i for i in range(2,n+1)]
    for i in nums:
        if i!=0 and isPrime(i):
            print(i, end=", ")
            # Removing the multiples of i from nums
            j = i-2
            while j<n-1:
                nums[j] = 0
                j += i

if __name__ == "__main__":
    print("This Program will display all prime numbers between 2 and the limit (say 100000) entered by you.")
    n = int(input("Enter the limit: "))
    getPrimeNumbers(n)