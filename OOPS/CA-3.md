# OOP CA-3 Notes (C++)

This file keeps the same answer flow/content style you shared, but is properly formatted as a clean Markdown document and corrected where needed.

---

## Topic 1: Dynamic Binding and Message Passing

### Dynamic Binding (Late Binding)

#### Definition (Exam Ready)

Dynamic binding (also called late binding) is the process of resolving a function call at runtime rather than at compile time.

It is mainly achieved using:

- Virtual functions
- Function overriding

#### Key Concept

- The function that gets executed depends on the type of object pointed to, not the pointer type.
- Happens in runtime polymorphism.

#### Example (C++)

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;

    b->show();  // Dynamic Binding
    return 0;
}
```

#### Output

```text
Derived class show function
```

#### Explanation

- `b` is a pointer of type `Base`
- But it points to a `Derived` object
- Because `show()` is virtual, the `Derived` version is called at runtime

#### Key Points (Write in Exam)

- Achieved using virtual functions
- Supports runtime polymorphism
- Function call resolved at runtime
- Uses base class pointer + derived class object

### Message Passing

#### Definition (Exam Ready)

Message passing in OOP refers to the process by which objects communicate with each other by sending messages (i.e., calling member functions).

#### Key Concept

- Object sends a message and invokes a function
- Promotes modularity and encapsulation

#### Example (C++)

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Message received: Display student info" << endl;
    }
};

int main() {
    Student s;
    s.display();  // Message passing
    return 0;
}
```

#### Explanation

- `s.display()` is a message sent to object `s`
- The object responds by executing the function

#### Key Points (Write in Exam)

- Objects communicate using function calls
- Improves code organization
- Core concept of object-oriented design

### Important Differences

| Feature | Dynamic Binding | Message Passing |
|---|---|---|
| Concept | Function call resolved at runtime | Communication between objects |
| Type | Polymorphism | OOP principle |
| Example | Virtual functions | Function calls on objects |

### MCQs (Exam Practice)

1. Dynamic binding occurs at:

   A. Compile time  
   B. Link time  
   C. Runtime ✅  
   D. None

2. Which keyword is used for dynamic binding in C++?

   A. static  
   B. virtual ✅  
   C. inline  
   D. friend

3. Message passing is related to:

   A. Inheritance  
   B. Encapsulation  
   C. Object communication ✅  
   D. Compilation

4. Which of the following supports runtime polymorphism?

   A. Function overloading  
   B. Operator overloading  
   C. Virtual functions ✅  
   D. Templates

5. In dynamic binding, function call depends on:

   A. Pointer type  
   B. Object type at runtime ✅  
   C. Compile-time type  
   D. Function name

---

## Topic 2: Binary Operator (Operator Overloading in C++)

### Operator Overloading (Binary Operator)

#### Definition (Exam Ready)

Operator overloading is a feature in C++ that allows us to redefine the behavior of operators (like `+`, `-`, `*`, etc.) for user-defined data types (classes).

A binary operator operates on two operands, e.g., `a + b`, `x * y`.

#### Common Binary Operators

- `+` (Addition)
- `-` (Subtraction)
- `*` (Multiplication)
- `/` (Division)
- `==` (Equality)

#### Syntax

```cpp
return_type operator op (parameters) {
    // logic
}
```

Example:

```cpp
Complex operator + (Complex c)
```

#### Example: Overloading `+` Operator

```cpp
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3;

    c3 = c1 + c2;  // operator overloading

    cout << "Real: " << c3.real << endl;
    cout << "Imag: " << c3.imag << endl;

    return 0;
}
```

#### Output

```text
Real: 6
Imag: 8
```

#### Explanation

- `c1 + c2` calls `operator+()`
- `c1` becomes the calling object
- `c2` is passed as argument
- Result is returned as a new object

### Important Rules (Very Important for Exam)

- Only existing operators can be overloaded (no new operators)
- Cannot change:
  - Number of operands
  - Operator precedence
  - Operator associativity
- Some operators cannot be overloaded:
  - `::` (scope resolution)
  - `.` (member access)
  - `.*` (pointer-to-member)
  - `?:` (ternary)
  - `sizeof`

### Types of Operator Overloading

1. Member Function
   - Defined inside class
   - Left operand = calling object
2. Non-Member Function (Friend)
   - Used when left operand is not an object

### Example (Friend Function for Binary Operator)

```cpp
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function
    friend Complex operator + (Complex c1, Complex c2);
};

Complex operator + (Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex a(1, 2), b(3, 4);
    Complex c = a + b;
    cout << "Real: " << c.real << "\nImag: " << c.imag << endl;
    return 0;
}
```

### Key Points (Write in Exam)

- Enables code readability
- Works on user-defined types
- Binary operator works on two operands
- Implemented using `operator` keyword

### MCQs (Exam Practice)

1. Which operator cannot be overloaded?

   A. `+`  
   B. `*`  
   C. `::` ✅  
   D. `-`

2. A binary operator works on:

   A. One operand  
   B. Two operands ✅  
   C. Three operands  
   D. No operand

3. Operator overloading is used for:

   A. Increasing execution speed  
   B. Redefining operator behavior for objects ✅  
   C. Memory allocation  
   D. Input/output

4. Which keyword is used for operator overloading?

   A. overload  
   B. operator ✅  
   C. define  
   D. function

5. In member function overloading:

   A. Left operand is passed as argument  
   B. Right operand is calling object  
   C. Left operand is calling object ✅  
   D. Both are arguments

---

## Topic 3: Static Member and Friend Function (C++)

### Static Member (Data Member and Function)

#### Definition (Exam Ready)

A static member of a class is a member that is shared by all objects of that class.

- Only one copy exists for the entire class
- Not specific to any single object

### Static Data Member

#### Key Points

- Shared among all objects
- Initialized outside the class
- Accessed using `ClassName::member`

#### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

// Initialize static member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    cout << "Total Students: " << Student::count << endl;

    return 0;
}
```

#### Output

```text
Total Students: 3
```

#### Explanation

- `count` is shared and increases with each object creation
- Stored in single memory location

### Static Member Function

#### Definition

A static member function is a function that:

- Can access static data members directly
- Can be called without creating objects

#### Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    static int x;

    static void show() {
        cout << "Value of x: " << x << endl;
    }
};

int Demo::x = 10;

int main() {
    Demo::show();  // No object needed
    return 0;
}
```

#### Key Points

- Called using `ClassName::function()`
- Cannot access non-static members directly

### Friend Function

#### Definition (Exam Ready)

A friend function is a function that is not a member of the class, but has access to its private and protected members.

Declared using the keyword `friend`.

#### Why Use Friend Function?

- To allow external functions access to private data
- Useful in operator overloading

#### Example

```cpp
#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    // Friend function declaration
    friend void display(Box b);
};

// Friend function definition
void display(Box b) {
    cout << "Length: " << b.length << endl;
}

int main() {
    Box b;
    display(b);  // Access private member
    return 0;
}
```

#### Output

```text
Length: 10
```

#### Explanation

- `display()` is not a member of class
- Still accesses private variable `length`

### Key Differences

| Feature | Static Member | Friend Function |
|---|---|---|
| Belongs to class | Yes | No |
| Access private members | Yes (as a class member, if access scope allows) | Yes |
| Memory | Single shared copy (for static data member) | No storage in class |
| Called using | Class name | Normal function call |

### Important Points (Exam Writing)

#### Static Members

- Shared by all objects
- Declared inside, defined outside
- Accessed using scope resolution `::`

#### Friend Function

- Declared with `friend` keyword
- Not part of class
- Can access private/protected members

### MCQs (Exam Practice)

1. Static data members are:

   A. Unique per object  
   B. Shared among all objects ✅  
   C. Local variables  
   D. Constant

2. Static members are initialized:

   A. Inside class  
   B. Outside class ✅  
   C. In constructor  
   D. In main

3. Friend function is:

   A. Member of class  
   B. External function with access to private members ✅  
   C. Static function  
   D. Inline function

4. Which keyword is used for friend function?

   A. static  
   B. public  
   C. friend ✅  
   D. private

5. Static functions can access:

   A. Only non-static members  
   B. Only static members directly ✅  
   C. Both directly  
   D. None

---

## Topic 4: Inline Function and Default Arguments (C++)

### Inline Function

#### Definition (Exam Ready)

An inline function is a function in which the function call is replaced by the actual function code during compilation, instead of performing a normal function call.

Declared using the keyword `inline`.

#### Purpose

- Reduces function call overhead
- Increases execution speed for small functions

#### Syntax

```cpp
inline return_type function_name(parameters) {
    // body
}
```

#### Example

```cpp
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    cout << "Square: " << square(num) << endl;
    return 0;
}
```

#### Output

```text
Square: 25
```

#### Explanation

Instead of calling `square()`, compiler may replace:

```cpp
square(num)
```

with:

```cpp
num * num
```

#### Important Points

- Best for small functions
- Compiler may ignore inline (it is a request, not a guarantee)
- Avoid for:
  - Large functions
  - Functions with loops/recursion

### Default Arguments

#### Definition (Exam Ready)

Default arguments allow a function to be called without passing all parameters, by assigning default values to parameters during declaration.

#### Syntax

```cpp
return_type function_name(type param = value);
```

#### Example

```cpp
#include <iostream>
using namespace std;

int add(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << add(5) << endl;      // uses default value
    cout << add(5, 20) << endl;  // overrides default
    return 0;
}
```

#### Output

```text
15
25
```

#### Explanation

- `add(5)` gives `b = 10` (default)
- `add(5, 20)` gives `b = 20` (user value overrides)

#### Important Rules

- Default arguments must be from right to left

Correct:

```cpp
int func(int a, int b = 5);
```

Wrong:

```cpp
int func(int a = 5, int b); // error
```

- Defined only once (either declaration or definition)

### Key Differences

| Feature | Inline Function | Default Argument |
|---|---|---|
| Purpose | Reduce function call overhead | Reduce number of arguments |
| Execution | Code expanded at compile time | Value assigned at call time |
| Keyword | `inline` | No keyword |

### Important Points (Exam Writing)

#### Inline Function

- Expands function code at call site
- Improves speed
- Used for small functions

#### Default Arguments

- Assign default values to parameters
- Helps in flexible function calls
- Must follow right-to-left rule

### MCQs (Exam Practice)

1. Inline function is expanded at:

   A. Runtime  
   B. Compile time ✅  
   C. Link time  
   D. Execution time

2. Inline functions are best suited for:

   A. Large functions  
   B. Recursive functions  
   C. Small functions ✅  
   D. Loops

3. Default arguments are assigned:

   A. At compile time  
   B. At runtime  
   C. During function call ✅  
   D. During linking

4. Default arguments must be:

   A. Left to right  
   B. Random  
   C. Right to left ✅  
   D. None

5. Which keyword is used for inline function?

   A. static  
   B. inline ✅  
   C. default  
   D. friend

---

## Topic 5: Access Modifiers and Strict Type Checking (C++)

### Access Modifiers

#### Definition (Exam Ready)

Access modifiers are keywords used in C++ to control the accessibility (visibility) of class members (variables and functions).

### Types of Access Modifiers

1. Public
   - Accessible from anywhere
   - No restriction
2. Private
   - Accessible only within the class
   - Not accessible outside directly
3. Protected
   - Accessible within class + derived (child) classes
   - Not accessible outside

#### Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int a;        // Public

private:
    int b;        // Private

protected:
    int c;        // Protected

public:
    void setValues() {
        a = 10;
        b = 20;
        c = 30;
    }

    void show() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main() {
    Demo d;
    d.a = 5;        // Allowed
    // d.b = 10;    // Error (private)
    // d.c = 15;    // Error (protected)

    d.setValues();
    d.show();

    return 0;
}
```

#### Explanation

- `a` accessible everywhere
- `b` only inside class
- `c` only inside class + inheritance

#### Table (Very Important for Exam)

| Modifier | Inside Class | Outside Class | In Derived Class |
|---|---|---|---|
| Public | Yes | Yes | Yes |
| Private | Yes | No | No |
| Protected | Yes | No | Yes |

#### Key Points

- Default access in class = private
- Used for data hiding
- Important for encapsulation

### Strict Type Checking (C++)

#### Definition (Exam Ready)

#### C++ is a strongly (strictly) typed language, meaning:

- Every variable must be declared with a type
- Operations are allowed only between compatible data types

#### Key Concept

- Prevents invalid operations
- Improves type safety and error detection

#### Example

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5f;

    // int result = a + b; // narrowing if assigned to int

    string s = "Hello";
    // int x = s;  // Error: incompatible types

    cout << a + b << endl;
    return 0;
}
```

#### Explanation

- `a + b` allowed (implicit conversion to float)
- `string` to `int` not allowed (type mismatch)

#### Type Conversion Types

1. Implicit Conversion
   - Done automatically by compiler
   - Example: `int` to `float`
2. Explicit Conversion (Casting)
   - Done manually by programmer

```cpp
int x = 10;
float y = static_cast<float>(x);
```

#### Key Points (Exam Writing)

- C++ enforces type safety
- Prevents invalid assignments
- Supports:
  - Implicit conversion
  - Explicit conversion

### MCQs (Exam Practice)

1. Which access modifier allows access everywhere?

   A. Private  
   B. Protected  
   C. Public ✅  
   D. Static

2. Default access specifier in class is:

   A. Public  
   B. Private ✅  
   C. Protected  
   D. Friend

3. Protected members are accessible in:

   A. Same class only  
   B. Derived class ✅  
   C. Outside class  
   D. Global scope

4. C++ is a:

   A. Weakly typed language  
   B. Strictly typed language ✅  
   C. Untyped language  
   D. Dynamic language

5. Which of the following is invalid?

   A. `int` to `float`  
   B. `float` to `int`  
   C. `string` to `int` ✅  
   D. `int` to `double`

---

## Topic 6: Parameter Passing by Reference (C++)

### Parameter Passing Methods (Quick Context)

In C++, parameters can be passed in two ways:

- Call by Value
- Call by Reference (our focus)

### Call by Reference

#### Definition (Exam Ready)

In call by reference, the address/reference of variables is passed to the function, so any changes made inside the function directly affect the original variables.

#### Key Concept

- No copy is created
- Function works on original data
- Changes are reflected outside the function

#### Syntax

```cpp
void function(type &variable);
```

#### Example: Swap using Call by Reference

```cpp
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;

    swap(a, b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
```

#### Output

```text
a = 10, b = 5
```

#### Explanation

- `&x` and `&y` are references to original variables
- No new value copy is created
- Swap happens on actual variables

### Call by Value vs Call by Reference

| Feature | Call by Value | Call by Reference |
|---|---|---|
| Data passed | Copy | Original |
| Effect outside function | No | Yes |
| Memory | Extra memory used | No extra copy |
| Speed | Slower | Faster |

### Another Example (Modification)

```cpp
#include <iostream>
using namespace std;

void increment(int &n) {
    n++;
}

int main() {
    int x = 5;
    increment(x);

    cout << x << endl;
    return 0;
}
```

#### Output

```text
6
```

#### Why Use Call by Reference?

- Efficient for large data
- Avoids copying
- Allows multiple outputs (like swap)

#### Important Points (Exam Writing)

- Uses reference operator (`&`)
- Works on original variables
- Changes reflect outside function
- Improves performance

### MCQs (Exam Practice)

1. In call by reference, we pass:

   A. Value  
   B. Copy  
   C. Address/reference ✅  
   D. Constant

2. Which symbol is used in reference parameter?

   A. `*`  
   B. `&` ✅  
   C. `#`  
   D. `@`

3. Changes in call by reference:

   A. Do not affect original  
   B. Affect original variables ✅  
   C. Affect copies only  
   D. None

4. Call by reference is:

   A. Slower  
   B. Faster ✅  
   C. Same  
   D. None

5. Which method is used in swap without pointers?

   A. Call by value  
   B. Call by reference ✅  
   C. Inline  
   D. Static

---

## Topic 7: Constructor and Destructor (C++)

### Constructor

#### Definition (Exam Ready)

A constructor is a special member function of a class that is automatically called when an object is created, used to initialize objects.

#### Key Characteristics

- Same name as class
- No return type (not even `void`)
- Called automatically
- Used for initialization

### Basic Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo() {   // Constructor
        x = 10;
        cout << "Constructor called" << endl;
    }
};

int main() {
    Demo d;
    cout << d.x << endl;
    return 0;
}
```

#### Output

```text
Constructor called
10
```

### Types of Constructors

#### 1) Default Constructor

Definition: A constructor with no parameters.

Example:

```cpp
class Demo {
public:
    int x;

    Demo() {
        x = 5;
    }
};
```

#### 2) Parameterized Constructor

Definition: A constructor that accepts arguments to initialize values.

Example:

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
    }
};

int main() {
    Demo d(20);
    cout << d.x << endl;
    return 0;
}
```

#### 3) Copy Constructor

#### Definition (Very Important): 
##### $\color{yellow}{\text{A constructor that initializes an object using another object of the same class.}}$


Syntax:

```cpp
ClassName(const ClassName &obj);
```

Example:

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
    }

    // Copy Constructor
    Demo(const Demo &d) {
        x = d.x;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;

    cout << d2.x << endl;
    return 0;
}
```

Output:

```text
10
```

#### 4) Dynamic Constructor

Definition: A constructor that allocates memory dynamically using `new`.

Example:

```cpp
#include <iostream>
using namespace std;

class Demo {
    int *p;

public:
    Demo(int val) {
        p = new int;
        *p = val;
    }

    void show() {
        cout << *p << endl;
    }

    ~Demo() {
        delete p;
    }
};

int main() {
    Demo d(50);
    d.show();
    return 0;
}
```

#### 5) Constructor Overloading

Definition: Multiple constructors in a class with different parameters.

Example:

```cpp
class Demo {
public:
    int x;

    Demo() {
        x = 0;
    }

    Demo(int a) {
        x = a;
    }
};
```

### Constructor Execution Flow (Diagram)

```text
Object Creation
      |
      v
Constructor Called Automatically
      |
      v
Memory Initialized
      |
      v
Object Ready to Use
```

### Destructor

#### Definition (Exam Ready)

A destructor is a special member function that is automatically called when an object is destroyed, used to free resources.

#### Key Characteristics

- Same name as class with `~` symbol
- No return type
- No parameters
- Called automatically when object goes out of scope

#### Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d;
    return 0;
}
```

#### Output

```text
Constructor called
Destructor called
```

### Destructor with Dynamic Memory

```cpp
#include <iostream>
using namespace std;

class Demo {
    int *p;

public:
    Demo() {
        p = new int;
        *p = 100;
    }

    ~Demo() {
        delete p;
        cout << "Memory freed" << endl;
    }
};

int main() {
    Demo d;
    return 0;
}
```

### Constructor vs Destructor

| Feature | Constructor | Destructor |
|---|---|---|
| Purpose | Initialize object | Destroy object |
| Name | Same as class | `~ClassName` |
| Parameters | Allowed | Not allowed |
| Overloading | Yes | No |
| Call time | Object creation | Object destruction |

### Object Lifecycle Diagram

```text
Program Start
    |
    v
Object Created
    |
    v
Constructor Called
    |
    v
Object Used
    |
    v
Object Goes Out of Scope
    |
    v
Destructor Called
    |
    v
Memory Released
```

### Important Points (Exam Writing)

#### Constructor

- Initializes object
- Automatically invoked
- Can be overloaded
- Types: default, parameterized, copy, dynamic

#### Destructor

- Frees memory/resources
- Automatically invoked
- Only one destructor allowed
- Cannot be overloaded

### MCQs (Exam Practice)

1. Constructor is called:

   A. Manually  
   B. Automatically on object creation ✅  
   C. At compile time  
   D. Never

2. Destructor name starts with:

   A. `*`  
   B. `&`  
   C. `~` ✅  
   D. `#`

3. Copy constructor takes:

   A. Integer  
   B. Object reference ✅  
   C. Pointer  
   D. String

4. Destructor can have:

   A. Parameters  
   B. Return type  
   C. Overloading  
   D. None of these ✅

5. Which allocates memory dynamically?

   A. Default constructor  
   B. Copy constructor  
   C. Dynamic constructor ✅  
   D. Inline

---

## Final Note

Topic 1 to Topic 7 completed in exam-ready structure with clean formatting.
