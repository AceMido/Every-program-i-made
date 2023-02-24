from sys import exit,argv

if(len(argv)!=2):
    print("missing command line arguments")
    exit(1)
print(f"hello {argv[1]}")
exit(0)