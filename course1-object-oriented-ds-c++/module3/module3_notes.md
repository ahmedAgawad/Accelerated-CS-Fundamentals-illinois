# Class Constructors :

when an instance (object) of a class is created, the class constructor sets up the initial state of the object.

## Automatic Default Constructor :

if we dont provide any custom constructors, c++ compiler itself provides free default constructor for our class.  
it will only intialize all member vars to their default values.

default value for primitive type is undefined if it was a user defined the compiler will define what its default value  
<br/>

## Custom Default Constructor :

simplest constructor we can provide that specifies the state of the object when the object is constructed. we define one by creating :

- member function with same name of the class
- no parameters no return type

automatically called when doing --> `className obj;`  
<br/>

## Custom Constructors :

we can specify custom, non-default constructors that require client code to supply arguments   
called when doing --> `className obj(value);`

NOTE : if any custom constructor is defined, an automatic default constructor is **not defined**

# Copy constructors :

special constructor that exists to make a copy of an existing object

## Automatic Copy Constructor :

if we dont provide a custom copy constructor, the c++ compiler provides an **automatic copy constructor** for our class for free  
The automatic copy constructor will copy the contents of all member variables.

## Custom Copy Constructor :

class constructor with one argument (const ref to same type of object) --> ex : `className(const className & obj) { variableName = obj.variableName}`

## Copy Constructor Invocation :

copy constructors are invoked automatically:

- passing an object as a parameter (by value)
- Returning an object from a function (by value)
- Initializing a new object using =

&nbsp;

# Copy Assignment Operator :

copy assignment operator (=) defines the behavior when an object is copied using the assignment operator

## Copy Constructor vs. Assignment :

A copy constructor creates a new object (constructor)

An assignment op assigns value to an existing object --> object has been already constructed

## Automatic Assignment Operator :

if an assignment operator is not provided c++ compiler provides an automatic assignment operator.  
automatic assignment operator will copy the contents of all member variables

## Custom Assignment Operator :

- public member function of class
- has function name `operator=`
- has return value of reference of class' type
- has exactly one argument const reference of class' type

EX : `className & className::operator=(const className & obj)`

# Variable Storage :

in c++ , an instance of a variable can be

- stored directly in memory
- accessed by pointer
- accessed by reference

## Direct Storage :

by default, variables are stored directly in memory

- type has no modifier
- object takes up exactly its size in memory

## Storage by pointer :

- type of variable is modified by an asterik (\*)
- pointer takes memory address width (64 bits on a 64-bit system)
- pointer points to allocated address of the object

## Storage by Reference :

- reference is an alias to existing memory and is denoted in type with &
- reference doesnot store memory itself (0 bytes)
- alias must be assigned when variable is initialized otherthan this error

## Pass by -------------- :

identical to storage, arguments can be passed to functions in 3 different ways :

- pass by value (default)
- pass by pointer (modified by  \*)
- pass by reference (modified by &, acts as an alias)

## Return by ----------:

same three ways --> NOTE : never return a reference to a stack variable created on the stack of your current function!

# Class Destructor :

when an instance of a class is cleaned up the class destructor is the last call in a class's lifecycle

## Automatic Default Destructor :

added to your class if no other destructor is defined.  
only action of it is to call the default destructor of all member objects.

An destructor should never be called directly. Instead, it is automatically called when the object's memory is being reclaimed by the system :

- object in stack ? --> when function returns
- object in heap ? --> when`delete` is used. (NOTE : if a heap memory is allocated during the execution of function then the memory still exists even after function return )

## Custom Destructor :

To add custom behavior to the end-of-life of the function, a custom destructor can be defined as:

- A custom destructor is member function
- has name of class preceded by tilde ~ `~className()`
- no arguments and no return type

it's essential when an object allocates an external resource that must be closed or freed when the object is destroyed (heap memory / open files / shared files)

# Some Errors :

## Segmentation fault (Segfault) :

on linux if you dereference an address you shouldn't (Segfault) --> ex : dereference a nullptr pointer

## Initialization :

if you don't initialize a pointer, you **should not try to dereference it** if you dereference an uninitialized pointer you may cause a undefined behaviour

plain bulit in types such as int, that are not initialized will have unknown values  
however, if you have a class type, its default constructor will be used to initialize the object

### heap memory pointer initialization :

when you want to use the **new** operator with bulit in types since these types may not have default initialization. therefore, you shouldn't assume they'll have an expected default be sure to initialize the value manually using `type * ptr = new type(value);`

# Range-Based For loop :

a version of for loop that automatically iterates over all elements in a container without index just temporary variable

`for (temporary variable declaration : container) { loop body }`

the temporary variable is just a copy of the value of current iterated element in the container (doesnot reflect changes on the original element)

if you want to change in elements make the temporary variable a reference   
even if you don't want to change values of elements create a reference to a constant will make it more efficient (don't copy a lot)

# Unsigned integers :

unsigned integers may produce errors in subtraction and addition

## Container sizes are othen unsigned :

gives you size as unsigned integer so you may need to cast them first before doing operations on them.

&nbsp;

&nbsp;