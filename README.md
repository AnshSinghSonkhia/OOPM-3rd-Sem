# Procedure Oriented Programming
C, COBOL, FORTRAN

Step by step procedures or algorithms

- POP follows Top-down approach in program design.

## Problems in POP 
- Global Data: accessible from entire program.
- difficult to track which function changed the data.
- If data structure is changed, functions are to be revised.

# Object Oriented Programming


It focuses on data rather than the procedure.

- We bind the data to the function using it

- Program is divided into OBJECTS, i.e. data and functions.

- Data is hidden & can NOT be accessed by external functions

- OOP follows Bottoms-up approach in program design.

- It protects data from accidental changes.

# What is Class?

The fundamental unit of OOP
- It is a User-defined data type.

- Class can have its properties and its functions
- It is a blueprint of objects

For example: Class - `Fruit`
    `Mango`
    `Apple`
    `Grapes`

# What are Objects?

Objects are variables of type `class`

Mango, Apple, Grapes are objects of class - Fruit

- All objects of a class has its properties and functions.

# Constructors

are used to initialise an object.

- This is a function, which is called when an object is created.

- This will have the same name as class name.

- 1 Class can have multiple constructors.

## Types of Constructors

1. Default Constructor - NO Arguments are passed.

2. Parametrized Constructor - Arguments are passed.

3. Copy Constructor - Used When we want to initialise an object based on another object.

# Destructor

This function is called when the object is deleted.

- Can NOT pass any parameters

```cpp
~Rectangle(){
    cout<<"Destructor is called";
}
```