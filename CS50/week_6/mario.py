def main():

    height=get_positive()
    for i in range(height):
        print("#")








def get_positive():
    while True:
        try:
            n=int(input("Enter the height: "))
            if(n>0):
                break
        except ValueError:
            print("thats not an int,try again")

    return n

main()