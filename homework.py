def countsum(number):
    if(number <1):
        print ("enter other value")
        return 0
    else:
    if(number >1):
        a1 = 0
        a2 = 1
        sum = 0
        while (a2 <= number):
            sum = a2 + sum
            k = a1 + a2
            a1 = a2
            a2 = k
            print("sum of all fibonacci numbers less than entered is" sum)
            return sum
    
    def primeNumber(number):
        for i in range(2,int(number**0.5)+1):
            if number%i==0:
                print ("the entered value is not prime")
                return False

            print ("entered value is prime")
            return True

    def binary(number):
        if number >=1:
            binary(number//2)
            print (num%2)

    def main():
        while (True):
            N - int(input())
            if (countsum (number) != 1):
                primeNumber(number)
                binary(number)
                break

