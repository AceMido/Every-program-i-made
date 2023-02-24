def main():
    
    
    x=float(input("Enter first number: "))  
    y=float(input("Enter second number: "))
    op=input("enter operator( + for submission, - for subtraction, * for multiplication, / for division): ")
   



   
    if op=="+":
        print(f"the submissiom is: {sum(x,y)}" )
    elif op=="-":
        print(f"the subtraction is:{sub(x,y)} ")
    elif op=="*":
        print(f"the multiplication is:{multi(x,y)} ")
    elif op=="/":
        print(f"the division is:{div(x,y)} ") 
   



def sum(x,y):
    return x+y
def sub(x,y):
    return x-y
def multi(x,y):
    return x*y
def div(x,y):
   return x/y






main()
