
# r => read only
# r+ => read and write


# w  => write only , create a file , clear old data
# w+ => read and write , create a file , clear old data


#a => append "add to the old data"
#a => read and write , create a file , save old data


#to open a file use
file=open("text.txt","r")

#to know if the file is readable or not use (returns true or false)
readable=file.readable()
print(readable)

#to read the contents of a file use
read=file.read()
print(read)


