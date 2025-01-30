# Template Types :

special type that can take on different types when the type is initialized --> ex : std::vector

## std::vector :

dynamic array growing (templated)

- Defined in : #include&lt;vector&gt;
- intialization : std::vector&lt;T&gt; vectorName;
- Add to back of array : vectorName.pushBack(element)
- Access specific element : vectorName\[unsigned position\]
- Number of elements : vectorName.size() 

&nbsp;

# Templates and Classes :

## Templated functions :

a template variable is defined by delcaring it before the beginning of class or function :

```cpp
template<typename T>
class List {
 // ...
 private :
  T data_;
};
```

```cpp
template<typename T>
  int max(T a, T b) {
  if(a > b) return a;
  return b;
}
```

NOTE : templated variables are check at compile time which allows errors to be caught before running the program. --> ex : if you make a call with templated variable and perform some comparison with operator not overloaded for this datatype

## String comparison note :

if we want to compare strings with alphabitacal order we should create them with `std::string("value")` not string literal (literals compare with address not value)

&nbsp;

# Inheritance :

```cpp
// header file
class child : public parent {
}
```

NOTE : cpp file of child must include parent header as well as its own header

## Initialization :

when derived class is initialized, derived class **must** construct the base class :

- by default uses default constructor 
- Custom constructor can be used with an **initialization list** 

```cpp
// in cpp file 
Cube::Cube(width, /*some parameters*/) : Shape(width) {
  // Cube own initializations
}
```

## Access Control :

when base class in inherited, the derived class :

- can access all **public** members of the base class 
- cannot access **private** memebers of the base class

## Initializer List :

the syntax to initialize the base class is called the initializer list and can be used for several purposes (only written in implementation in cpp file not in header file): 

- initialize a base class
- intialize the current class using another constructor
- initalize the default values of member variables 

```cpp
// in cpp file
Shape::Shape() : Shape(1) {
}

Shape::Shape(double width) : width_(width) {

}
```