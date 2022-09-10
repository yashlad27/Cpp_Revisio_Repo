# Cpp_Revisio_Repo
-----------------------------------------------------------------------------------------
C++ Basic code syntax, stl library examples and dsa udemy course

## Sequence Containers: 
1. Vectors: 
-> random access - fast
-> MIDDLE insertion/ deletion - slow
-> insertion/ Deletion at the end - fast

2. List: 
-> Random access - slow
-> MIDDLE deletion/ insertion - fast
-> Deletion/ insertion at the end - fast

## Associative Containers:
-> All operations fast except Random Access

## Derived Containers:
-> depends on Data structure.

----------------------------------------------------------------------------------------
# Exception Handling:
## Two Child Classes of Exception Lib:
1. Logic_error:
    a logic_error results from a fault in logic in our code. 
    {out of range error!} 
    or
    {length_error: occurs in situations involving invalid lengths}

2. runtime_error

----------------------------------------------------------------------------------------

# Pointers:
1. Also called pointer variables.
2. Holds a memory address.
3. Refer to the data of interest indirectly.

## Declaring a pointer:
1. int* myIntPtr {not an integer, its a pointer to an integer}
2. using ptr in the identifier is common practice.

## declaring multiple variables per line:
int *ptr1, *ptr2, *ptr3.

## Three situations we use the asterisk (*):
1. between a data type and identifier in pointer declaration.
    eg: int* myNum;
2. As the unary dereference Operator.
    eg: *myNum = 400;
3. used as the binary multiplication operator.
    eg: int myNum = hisnum * hernum