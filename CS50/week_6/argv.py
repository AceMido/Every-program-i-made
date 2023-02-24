from sys import argv


# if len(argv)>1:
#     for i in argv[1: ]:
#         print(i)
# else:
#     print("hello world")


#or
if len(argv)>1:
    for i in argv[1: ]:
        if argv != 1:
            print(i)
else:
    print("hello world")