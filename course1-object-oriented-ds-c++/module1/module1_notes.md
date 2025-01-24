# Intro :

C++ is **strongly typed lang** every var has a type , value, name , location in memory

## Types :

primitive : int, char,bool, float,double,void  
User-defined : an unbounded number of user-defined types string, vector

# Cpp classes :

## Encapsulation :

encloses data and functionality into single unit called class. --> public and private   
public members : can be accessed by client code  
private members : cannot be accessed by client code (only used within the class itself)

```cpp
class Cube {
 public:
   double getVolume();
   // ..

 private:
   double length_; // _ at the end of private is google standard
};
```

## Encapsulation with header files :

in c++ , the interface(.h file) to the class is defined sperately from the implementation (.cpp file).

### Header File (.h) :

defines the interface to the class, which includes :

- Declaration of all member variables : not value (init)
- Declaration of all member functions : not implementation

header files start `#pragma once`

### Implementation File (.cpp) :

contains the implementation of the functions and members defined in header file  
MUST include header file : `#include "header.h"`  
in the implementation file we dont need to rewrite all code for the class we just need to the implement using :: operator  
cpp files can access and modifiy the variables in the header files without the need for redeclaring them again

```cpp
returnType className::functionName () {
    return // value;
}
```

NOTE : main cpp file must also include header files !!!

# Cpp std : standard library

C++ std provides a set of commonly used functionality and data structures to bulid upon.

## standard library organization :

std or stl is organized into many separate sub-libraries that can be #include'd in any c++ program   
<br/>

## iostream :

header file includes operations for reading/writing to files and the console itself, including std::cout

## Namespaces :

any functionality used from std will be part of **std** namespace   
namespaces allows us to avoid name conflicts for commonly used names   
if a feature from namespace is used often it can be imported into global space with **using** keyword

`using std::cout;` --> result in when using cout we just write cout

## How can we add some class to a namespace :

if we want to use class like `uiuc::className obj;`

```cpp
//in header file
#pragma once

namespace uiuc {
  class Cube {
    public :

    private :
  }
}
```

```cpp
// in cpp file for implementation
#include "header.h"

namespace uiuc {
 returnType class::functionName () {
   return value;
 }
}
```
