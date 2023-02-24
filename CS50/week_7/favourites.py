import csv
import re

titles={}

with open("favourites.csv") as file:
    reader=csv.DictReader(file)
    #strip() is for deleting the whitespace made at the end and the start
    #uppercase() to make all titles in uppercase
    for row in reader:
        title=row["title"].strip().upper()
        #if the current title isnt in the dict add it then increase the value of it by 1
        if not title in titles:
            titles[title] = 0
        titles[title]+=1







#use lambda which is no name to make a function which parameter is title and the return value is titles[title]
#reverse=true to sort them by the greatest value to the smallest one
for title in sorted(titles, key=lambda title:titles[title], reverse=True):
    print(title, titles[title])