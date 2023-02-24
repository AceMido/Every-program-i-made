import csv

    #strip() is for deleting the whitespace made at the end and the start of the input
    #uppercase() to make all titles in uppercase
title=input("Title: ").strip().upper()

counter=0

with open("favourites.csv") as file:
    reader=csv.DictReader(file)

    for row in reader:
        if row["title"].strip().upper()==title:
            counter+=1




print(f"Title: {counter}")

