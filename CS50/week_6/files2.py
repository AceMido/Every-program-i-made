# r => read only
# r+ => read and write


# w  => write only , create a file , clear old data
# w+ => read and write , create a file , clear old data


#a => append "add to the old data"
#a => read and write , create a file , save old data


#instead of typing
#file=open("test1.csv","r")
#code to edit the file
#file.close()
#u can use the following code which open the file and close it automatically and u can edit it however u want after the colon
with open("test1.csv","r+") as file:
    print(file.read())
