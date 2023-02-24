from sys import exit

phonebook={
    "david":"01021",
    "mohamed":"01021421",
    "ali":"01023134"
}
name=input("Name: ")
if name in phonebook:
    print(f"Number: {phonebook[name]}")
    exit(0)

print("not found")
exit(1)