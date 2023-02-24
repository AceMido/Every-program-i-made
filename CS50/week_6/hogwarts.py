import csv


houses={
    "Gryffindor": 0 ,
    "Ravenclaw":  0 ,
    "Hufflepuff": 0 ,
    "Slytherin":  0
}

with open("houses.csv","r") as file:
    #to read the file contents as a list
    reader=csv.reader(file)
    #to skip the first row in the csv file
    next(reader)
    for row in reader:
        #everytime the loop start its like accessing the key then adding 1 to the value of it
        #like in the first row in the csv
        #houses["Gryffindor"]+=1
        #row[1]= the second colomn
        house=row[1]
        houses[house]+=1


#print the scores
for house in houses:
    #house is for the key, house[house] is for the value of each key
    print(f"{house} :{houses[house]} ")