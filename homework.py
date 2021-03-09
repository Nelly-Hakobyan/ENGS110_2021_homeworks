
    import n 
    if ( n <= 0 ) :
        return 0
    print ("sum does not h")
    number =[0] * (n+1)
    number[1] = 1

    sm = number[0] + number[1]

    for i in range(2,n+1) :
        number[i] = number[i-1] + number[i-2]
        sm = sm + number[i]

        return sm
    print(sm)
    
