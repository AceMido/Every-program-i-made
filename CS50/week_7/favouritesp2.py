import csv
import re

titles={}
counter=0
with open("favourites.csv") as file:
    reader=csv.DictReader(file)
    #strip() is for deleting the whitespace made at the end and the start
    #uppercase() to make all titles in uppercase
    for row in reader:
        title=row["title"].strip().upper()
        # ^ means the start of the input, | means or , . means one or more chars between , $ means at the end of the input
        if re.search("^(OFFICE|THE.OFFICE)$",title):
            counter+=1








print(f"the office: {counter}")