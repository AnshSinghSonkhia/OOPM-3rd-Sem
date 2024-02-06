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

# Encapsulation

- It ensures Binding of methods and variables together into a single unit, i.e., `Class`.

- It is a property of OOPS.

- Data is only accessible from the class methods (function)

- It leads to Data Abstraction / Hiding.
    - Due to which, `Class` is known as an `Abstract Data type`.

# Abstraction 

- Property of OOP

- It enables us to display only essential information, while hiding the implementation details.

Example: The implement details of `pow(x,y)` function is hidden to us. We may not know how it is calculating the powers, but we can use it.

## Types of Abstraction:
### 1. Data abstraction
This type only shows the required information about the data and hides the unnecessary data.
### 2. Control Abstraction
This type only shows the required information about the implementation and hides unnecessary information.

# Inheritance

- A class inherits properties of another class.

`Parent Class (Super Class) ----> Child Class (Sub Class)`

- Once a property is defined in a parent class, you won't need to repeat that code for other inherited classes.

- So, Inheritance brings `Code Reusability`

# Access Specifiers & Modes of Inheritance
> Used for Data Members & Member Functions in Class

1. Public
    - Data Members & Member Functions can be accessed from `anywhere` in the code.

2. Protected
    - Data Members & Member Functions can only be accessed from its `own class`, `parent class` & `derived class`.

3. Private
    - Data Members & Member Functions can only be accessed from its `own class`.

## Access Specifiers - Public, Protected, Private

```cpp
class Parent{
    public:
        int x;
    
    protected:
        int y;
        
    private:
        int z;
};
```

## Modes of Inheritance - Public, Protected, Private

```cpp
class Child1: public Parent {
    // x will remain public
    // y will remain protected
    // z will NOT be accessible
};

class Child2: private Parent {
    // x will become private
    // y will become private
    // z will NOT be accessible
};

class Child2: protected Parent {
    // x will become protected
    // y will become protected
    // z will NOT be accessible
};
```

# Types of Inheritance

### 1. Single Inheritance
`A --> B`

-  A derived class inherits directly from one Parent class (or Base Class)

> Think of it like a child inheriting traits from one parent. The child gets both unique and shared features.

- Maintains a clear hierarchy.

### 2. Multi-level Inheritance
`A --> B --> C`

- A derived class inherits from another derived class, forming a chain of inheritance

> This is like a grandchild inheriting from their parent (who inherited from a grandparent). Each generation builds on the previous one, gaining more specialized skills.

### 3. Multiple Inheritance
`A --> C <-- B`

- A derived class inherits from multiple parent classes.

- Potentially combining their features but increasing complexity and requiring careful management of ambiguities.

> Imagine a child inheriting from two parents, like having skills from both mom and dad (e.g., programming and music). It can be powerful, but managing who gets what can be tricky.

### 4. Hierarchical Inheritance
`A --> B`, `A--> C`

- Multiple derived classes inherit from a Parent base class.

- creating a branching hierarchy where each derived class focuses on a distinct aspect of the parent class's functionality.

> Picture siblings, each inheriting from the same parent but developing in different directions (e.g., one becomes a doctor, the other an engineer). They share some traits but specialize in different areas.

### 5. Hybrid Inheritance

- Combination of more than one inheritance type

- For Example:
    - `A --> B`
    - `A --> C`
    - `C --> D`
    - `B --> F`

- A derived class combines multiple inheritance (from more than one base class) and multilevel inheritance (inheriting from a derived class), leading to a complex inheritance structure that requires careful design and attention to potential conflicts.

> This is like having a complex family tree, combining multiple parents and grandparents. It can be flexible, but keeping track of who gets what can be confusing


# Polymorphism

Polymorphism is the ability of objects / methods to take different forms with the same name (or Word).

## 2 Types of Polymorphism
1. Compile Time Polymorphism
2. Run Time Polymorphism

# 1. Compile Time Polymorphism

- resolved at Compile-time
- this is performed using `Function Overloading` & `Operator Overloading`

-  Multiple methods with same name but different signatures, chosen by the compiler based on parameters. (e.g., function overloading)

> The compiler decides which function to use based on what information you give it.

## Function Overloading
> works at compile-time polymorphism

- Defining a number of functions with the SAME Function `Name`.
- But, they perform differently, acc. to the `Arguments` passed.

### This Decision of which function will be called, acc. to Arguments is based on:

- `Number` of Arguments Passed.
- `Type` of Argument Passed.

### For Example:

To calculate the area of `Circle`, `Sqaure`, or `Triangle`, we can define functions with the same name, but different types of arguments.

## Operator Overloading
> works at compile-time polymorphism

- Addition: `2 + 3 = 5`
- Concatination: `"cat" + "woman" = "catwoman"`

### Question: How to add 2 complex numbers using operator overloading?

# 2. Run Time Polymorphism

- resolved at Run-time
- this is performed using `Function Overriding`

- Same method name in subclasses with different implementations, chosen dynamically based on object type. (e.g., method overriding)

> The program figures out which function to use based on the actual data it's working with.

## Function Overriding

`https://www.geeksforgeeks.org/function-overriding-in-cpp/`

- When a Child class defines a function of parent class.
    - `Same function` in both `Parent class` & `child class`

>  Function overriding in C++ is termed as the redefinition of base class function in its derived class with the same signature i.e. return type and parameters.

> It falls under the category of Runtime Polymorphism.

### Use of `virtual` keyword to decide at runtime, about which function to use for `function overriding`

```cpp
class Parent{
    public:
        virtual void print(){
            cout << "Parent Class print" << endl;
        }
        void show(){
            cout << "Parent Class shown" << endl;
        }
        
};

class Child: public Parent{
    public:
        void print(){
            cout << "Child Class print" << endl;
        }
        void show(){
            cout << "Child Class shown" << endl;
        }
};

int main() {
    
    Parent *p;
    Child c;
    
    p = &c;
    p -> print();
    p -> show();
    
    return 0;
}

// OUTPUT
// Child Class print
// Parent Class shown
```

### So, which function will be called in case of overriding?

- The one nearest, will be called.

# Function Overloading Vs Function Overriding

| Function Overloading | Function Overriding |
| ------- | ------- |
| It falls under Compile-Time polymorphism	| It falls under Runtime Polymorphism |
| A function can be overloaded multiple times as it is resolved at Compile time	| A function cannot be overridden multiple times as it is resolved at Run time |
| Can be executed without inheritance  |	Cannot be executed without inheritance |
| They are in the same scope |	They are of different scopes. |

# Compile Time Polymorphism Vs Run Time Polymorphism

| Compile Time Polymorphism | Run Time Polymorphism |
| ------- | ------- |
| Achieved at `Compile Time` | Achieved at `Run Time` |
| Through `Function Overloading` & `Operator Overloading` | Achieved through `Function Overriding` |
| Function names should be `Same`, but Parameters can be `Different` | Function name and parameters both should be same. |
| Faster `execution time` | slower |
| More `memory efficient` | Comparatively less memory efficient |

# Friend Function

- It is a Non-member function, which can access private members of the class.

# Exception Handling in Java

```java
        int i = 0;
        int m = 0;
// try & catch blocks - won't stop the further execution, if an exception is encountered
        try {
            m = 18/i;
        }
        catch(Exception obj) {
            System.out.println("Something went wrong.......");
        }
        finally {
            System.out.println("Finally Block runs, whether error occurs or not");
        }
```

# Control Statements:
## Conditional Statements
1. if
2. else
3. else if
4. switch
## Iterative Statements
1. for
2. while
3. do while
## Jump Statements
1. break
2. continue
3. goto

# Empty Classes

Empty classes in C++ can't have any data members (variables), but they can indeed still have member functions (methods). It's important to clarify this distinction:

- `Data members:` These are variables that store data associated with an object of the class. Empty classes by definition don't have any.
- `Member functions:` These are functions defined within a class that can access the class's data members (if any) and other member functions. Empty classes can still have these, even without data members, to perform specific actions or calculations.

## Creating Instances of Empty Classes:

- Yes, you can create instances of empty classes. The compiler allocates a minimum of `1 byte` of memory for each object, even if it's empty, to maintain unique object addresses and facilitate some internal operations.

- While the object itself holds no user-defined data, it retains its type information and can be manipulated like any other object of its class.

```cpp
class EmptyClass {
    public:
        // Member function (doesn't access any data)
        void say_hello() {
            cout << "Hello from the empty class!" << endl;
        }
};

int main() {
  EmptyClass obj1, obj2; // Creating instances of the empty class
  // obj1 and obj2 have separate memory addresses despite being empty

  obj1.say_hello();   // Output: Hello from the empty class!
  return 0;
}
```

## Reasons for Using Empty Classes:

- `Placeholders`: Sometimes you might need a class to serve as a placeholder for future implementation or to define relationships between other classes without actual functionality.

- `Type Differentiation`: By creating empty classes, you can differentiate types even when they might have the same behavior, promoting code clarity & organization.

- `Mixins` and `Traits`: In more advanced scenarios, empty classes can be used as mixins or traits to bundle specific behaviors or properties that can be inherited by other classes for modularity and code reuse.

- `Singletons`: Empty classes can be used to implement the singleton design pattern, ensuring only one instance of a class exists.

### Remember:

- Empty classes don't provide any intrinsic functionality on their own.
- Using them excessively can lead to unnecessary complexity and might not be the most efficient approach in all situations.
- Consider alternatives like interfaces or abstract classes if you only need to define common behavior without implementation.

# Role of `cout` and `cin` in C++

I'd be glad to discuss `cout` and `cin` in C++:

**What are cout and cin?**

- **`cout`** (standard output stream) and **`cin`** (standard input stream) are predefined objects in C++ used for formatted input and output operations, respectively.
- They are instances of the `ostream` and `istream` classes, respectively, which provide the base functionalities for input/output operations.

**Why are they used?**

- **Convenient and User-Friendly:** `cout` and `cin` offer a simple and readable way to interact with the user during program execution. They eliminate the need for low-level system calls, making your code more portable and maintainable.
- **Formatted Input/Output:** They allow you to control the presentation of data using formatting options like precision, width, and justification. This enhances code readability and improves user experience.
- **Object-Oriented Approach:** Being objects themselves, `cout` and `cin` integrate seamlessly into the object-oriented paradigm of C++, promoting consistency and modularity.

**Key Points:**

- **Accessing `cout` and `cin`:** You typically don't need to create instances of `cout` and `cin` yourself. They are implicitly declared in the `iostream` header file, which most C++ programs include by default.
- **Basic Usage:**
    - Print to the console: `std::cout << "Hello, world!" << std::endl;`
    - Read input from the user: `int age; std::cin >> age;`
- **Formatting:**
    - Control output precision: `std::cout << std::fixed << std::setprecision(2) << value;`
    - Set output width: `std::cout << std::setw(10) << name;`
    - Format input/output to different bases: `std::cout << std::hex << number;`
- **Error Handling:** Check for successful input/output operations using member functions like `fail()` or `good()`.

**Additional Considerations:**

- **Alternative Input/Output Methods:** For more advanced scenarios, C++ offers other classes and functions for file I/O, network I/O, and specialized input/output tasks.
- **Efficiency:** While `cout` and `cin` are generally convenient, for very performance-critical applications, you might consider lower-level I/O operations for optimizations.

**Beyond the Basics:**

- **Manipulators:** For finer control over formatting, use manipulators like `endl`, `setw`, and `setprecision`.
- **Customizing Streams:** You can create custom I/O streams that inherit from `ostream` and `istream` to implement specific formatting or behavior.

I hope this comprehensive explanation clarifies the role of `cout` and `cin` in C++. Feel free to ask if you have any further questions!