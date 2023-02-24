#new list to save scores in it
scores=[]

#if there is a value error
try:
    #take input how many numbers
    length=int(input("How many numbers? "))
except ValueError:
    print("wrong input, try again")

#take inputs to save to scroes based on the number of numbers needed then add them to scores list by append method
for i in range(length):
    try:
        score=int(input(f"scrore {i+1} : "))
        scores.append(score)
        # or by doing
        #scores+=[score]
    except ValueError:
        print("wrong input,try again")

#print the average by adding the submission of the scores by sum method and dividing it by the numbers of them by using len method
print(f"the average is: {sum(scores)/len(scores)}")