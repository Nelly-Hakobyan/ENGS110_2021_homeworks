def countsum(number): 
    if (number <= 0 ):
        return 0
    else:
        a1 = 0
        a2 = 1
        sum = 0
        while (a2 <= number):
            sum = a2 + sum
            k = a1 + a2
            a1 = a2
            a2 = k
        print(sum)

       

   
def primeNumber(number):
    p = int(number**0.5)
    for i in range (2, (p + 1)):
        if number % i == 0:
            print ("not prime")
            return False

        print ("prime")
        return True 
                  
            


def binary(number):
        if number > 0:
            binary(number//2)
            print (number%2, end=" ")

                        


def main():
    while (True):
        number =int(input("enter number:"))
        if(countsum(number) != 1):
            countsum (number)
        primeNumber(number)
        binary(number)
       
main()



