#type               brackets               ordered              mutable             duplicatable                            known usage

#list                  []                    yes                  yes                    yes                                all

#tuple                 ()                    yes                  no                     yes                                cordinations

#set                   {}                    no                   no                     no                                 mathmatics operations

#dict                  {}                    by key               yes                    yes(values),no(keys)               databases


my_list=[1,1,1,1,["another list",2313],1.5555555,1.3]
print(my_list)
print(my_list[3])


my_tuple=(1,2,3,1,1,1)
print(my_tuple)
print(my_tuple[1])


my_set={1,2,"ahmed","ali"}
print(my_set)


my_dict={
        "my name":"mohamed"
        ,"age" : 18
}
print(my_dict)
print(my_dict["age"])