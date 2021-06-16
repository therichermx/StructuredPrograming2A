import sys

##Variables globales##
my_int = 0
my_str = ""
my_float = 0.0
my_bool = True ##False
my_list = [] ##list

if __name__ == "__main__":

    my_int = sys.argv[1]
    my_str = "Hola mundo"
    my_float = 3.14
    my_bool = False##False
    my_list = [1,2,3,4] ##list

    print(my_int,my_str,my_float,my_bool,my_list[1])

    print("name program", sys.argv[1])

    #print(sys.argv)