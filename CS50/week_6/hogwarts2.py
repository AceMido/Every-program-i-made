import csv


houses={
    "Gryffindor": 0 ,
    "Ravenclaw":  0 ,
    "Hufflepuff": 0 ,
    "Slytherin":  0
}

with open("houses.csv","r") as file:
    #to read the file contents as a dict
    reader=csv.DictReader(file)
    for row in reader:
        #acess the House coloumn instantally
        house=row["House"]
        houses[house]+=1


#print the scores
for house in houses:
    #house is for the key, house[house] is for the value of each key
    print(f"{house} :{houses[house]} ")