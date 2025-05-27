state = True

print("Welcome!")
while state == True:
    print("square")
    print("rectangle")
    print("triangle")
    print("circle")
    print("trapezoid")
    print("exit")
    User = input("")

    if User == "square":
        size = float(input("Give Length or Width of Square: "))
        result = pow(size, 2)
        print("Area of square is: ",result)
        con = input("Do You Wish To Continue? (y/n): ")
        if con == "n":
            state = False

    elif User == "rectangle":
        Length = float(input("Give Length of Rectangle: "))
        Height = float(input("Give Height of Rectangle: "))
        result = Length * Height
        print("Area of rectangle is: ",result)
        con = input("Do You Wish To Continue? (y/n): ")
        if con == "n":
            state = False

    elif User == "triangle":
            Length = float(input("Give Length of Triangle: "))
            Height = float(input("Give Height of Triangle: "))
            result = (Length * Height) / 2
            print("Area of Triangle is: ",result)
            con = input("Do You Wish To Continue? (y/n): ")
            if con == "n":
                state = False

    elif User == "circle":
        r = float(input("Give radius of the circle: "))
        result = 3.14 * pow(r, 2)
        print("Area of circle is: ",result)
        con = input("Do You Wish To Continue? (y/n): ")
        if con == "n":
            state = False

    elif User == "trapezoid":
        Length1 = float(input("Give Length1 of Trapezoid: "))
        Length2 = float(input("Give Length2 of Trapezoid: "))
        Height = float(input("Give Height of Trapezoid: "))
        result = ((Length1 + Length2) * Height) / 2
        print("Area of Trapezoid is: ",result)
        con = input("Do You Wish To Continue? (y/n): ")
        if con == "n":
            state = False
    
    elif User == "exit":
        state = False
    
    else:
        print("Wrong Answer")