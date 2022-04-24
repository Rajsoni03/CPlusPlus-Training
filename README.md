# CPlusPlus-Training

## Day 1 ([PDF](/PDF_Notes/Day-1.pdf))
* C philosophy (data + algo)
* Language Growth
* Compiler 
* Compilation stages (Source Code -> Object Code -> Executable File)
* File extension
* GCC Commands
  ```bash
  # compile source file without linking 
  # (source file -> object file)
  g++ -c source_file.cpp
  ```
  ```bash
  # linked object file with header and crteate executable file 
  # (object file -> executable file)
  g++ object_file.o -o executable_file.exe
  ```
  ```bash
  # compile and create executable file at once
  # (source file -> executable file)
  g++ source_file.cpp -o executable_file.exe
  ```
  ```bash
  # run the code
  ./executable_file.exe
  ```
* Hello World Code
* `main()` Function
  * minimun code in source file
  * alternate ways to write `main()`
* Commants 
  * Single Line Commants ` /* */ `
  * Multi line Commants ` // `

## Day 2 ([PDF](/PDF_Notes/Day-2.pdf))
* Source Code Formatting  
* Program and Process
* Process Memory Allocation in OS
* `cout` and `printf`
* `cout` Concatenation 
* `endl` and `\n`
* `cin` and `scanf` 

## Day 3 ([PDF](/PDF_Notes/Day-3.pdf))
* preprocessor directives
  * #include <math.h> and <cmath>
  * #define (macro)
* namespace 
* using
* variable declaration  
  * Identifiers name
* Integer types
  * `short`
  * `int`
  * `long`
  * `long long`
* `sizeof()` operator 
* limits 

## Day 4 ([PDF](/PDF_Notes/Day-4.pdf))
* `signed` integers
* `unsigned` integers
* overflow problem

## Day 5 ([PDF](/PDF_Notes/Day-5.pdf))
* variable initialization
  * C style initialization ` = `
  * constructor initialization `()`
  * uniform initialization `{}`
* integer literals
  * decimal
  * hexadecimal
  * octal
  * binary
* cout manipulators
  * `dec`
  * `hex`
  * `oct`
* format specifier in c
  * `%d`
  * `%x`
  * `%o`


## Day 6 ([PDF](/PDF_Notes/Day-6.pdf))
* Memory resources lock and unlock (Garbage value concept)
* `char`
  * `wchar_t`
  * `char16_t`
  * `char32_t`
* ASCII
* Unicode
* Unicode as identifier
* `cin.get()`
* `cout.put()`


## Day 7 ([PDF](/PDF_Notes/Day-7.pdf))
* floating type
  * `float`
  * `double`
  * `long double`
* Scientific Notation
* float limitations
* float opperations
* `bool`

## Day 8 ([PDF](/PDF_Notes/Day-8.pdf))
* `auto`
* `decltype`
* `string`
* Operators
  * Assignment Operator `=`
  * Arithmetic Operators `+`, `-`, `*`, `/`, `%`
  * Compound Operators `+=`, `-=`, `*=`, `/=`, `%=`, `>>=`, `<<=`, `&=`, `^=`, `|=`
  * Increment and Decrement `++`, `--`
  * Comparison Operators `==`, `!=`, `>`, `<`, `>=`, `<=` 
  * Logical Operators `!`, `&&`, `||`
  * Conditional Ternary Operator `?` 
  * Precedence of Operators

## Day 9 ([PDF](/PDF_Notes/Day-9.pdf))
* Type Conversion
* Implicit Type Conversion
  * Conversion on Initialization
    * With `=`
    * With `()`
    * With `{}`
  * Conversion in Expessions
  * Conversion in Passing Arguments
* Type Casting 
  * `(type) value`
  * `type (value)`
  * `static_cast<type> (value)`

## Day 10 ([PDF](/PDF_Notes/Day-10.pdf))
* Functions
* Using a function (Library Functions)
* User define functions
  * Function declaration
  * Function call
  * Parameters
  * Return Type 
* Function Execution
* Memory Allocation of Local Variables (Stack)
* Function Variations
* Ambiguity in function call
* Type Conversion in Passing Arguments

## Day 11 ([PDF](/PDF_Notes/Day-11.pdf))
* Flow Control
  * if-else
  * for
  * while
  * do while
  * switch
* comma `,` operator 

## Day 12 ([PDF](/PDF_Notes/Day-12.pdf))
* Array
* array declearation 
* memory allocation
* sizeof array
* indexing
* initialization 
  * uniform initialization `{}`
* default value 


## Day 13 ([PDF](/PDF_Notes/Day-13.pdf))
* Function 
  * Pass by value
  * Pass by Referance
* Array Traversal
* For each loop / range based for loop
* Aliasing in for loop
* Pass array in function parameters


## Day 14 ([PDF](/PDF_Notes/Day-14.pdf))
* Charactor Array
* null charactor `\0`
* Create length function (strlen)


## Day 15 ([PDF](/PDF_Notes/Day-15.pdf))
* Create copy function (strcpy)
* Create comparison function (strcmp)
* Create concatenate function (strcat)
* memory allocation in stack
* address of operator `&`
* pointers declearation 
* dereference operator `*`
* create pointer using integer variable


## Day 16 ([PDF](/PDF_Notes/Day-16.pdf))
* Pointers memory resloving
* Pointers arithmetics
  * `ptr++`
  * `ptr--`
  * `*ptr++`
  * `*(ptr++)`
  * `(*ptr)++`
  * `++*ptr`
  * `*++ptr`
  * `*(++ptr)`
  * `++*ptr++`
  * `(++*ptr)++`
  * `++(*ptr++)`
  * `++*--ptr++`
  

##  Day 17 ([PDF](/PDF_Notes/Day-17.pdf))
* Array Pointers 
* Array element access using pointers
* Pointer in function return type
* Dynemic memory allocation `new`* 


## Day 18 ([PDF](/PDF_Notes/Day-18.pdf))
* Const Pointers 
```C++
const int* ptr = &var;
int* const  ptr = &var;
const int* const ptr = &var;
```
```C++
// Both are same
const int *ptr = &var;
int const *ptr = &var;
```
* Deallocate Dynamic memory 
  * `delete`
  * `delete[]`

## Day 19 ([PDF](/PDF_Notes/Day-19.pdf))
* Add element to static Array
* Pointer to Pointers
* String 
  * initialization
  * `size()`
  * `length()`
  * `at()`
  * `operator[]`
  * `front()`
  * `back()`
  * `operator+=`
  * `append()`
  * `insert()`
  * `push_back()`
  * `pop_back()`

## Day 20 ([PDF](/PDF_Notes/Day-20.pdf))
* 2D Array
  * Declaration 
  * Initialization 
  * Uniform Initialization 
  * Memory Allocation
* 2D Array with pointerm
  * Different size array
  * Non-continous memory allocation
* Multi Dimentional Array 

## Day 21 ([PDF](/PDF_Notes/Day-21.pdf))
* Add element to dynamic Array (vector)
* remove element to dynamic Array (vector)

## Day 22 ([PDF](/PDF_Notes/Day-22.pdf))
* Structure - `struct`
  * Declaration 
  * List Initialization 
  * Uniform Initialization 
  * Global and Local Struct
  * Unnamed Struct
  * Memory Allocation / Size of Struct
  * Array of Struct (SOA)
  * Struct of Array (AOS)
  * Struct Pointer
  * `->` operator
  * Struct in heap

## Day 23 ([PDF](/PDF_Notes/Day-23.pdf))
* Union - `union`
  * Declaration 
  * Initialization 
  * Memory Allocation / Size of Union
  * Example of union
  * Unnamed Union
  * Nested Union
  * Anonymous Union
* Enumeration - `enum`
  * Declaration 
  * Initialization
  * Enum to int 
  * Anonymous Enum
  * Enum class

## Day 24 ([PDF](/PDF_Notes/Day-24.pdf))
* revision of dynamic array
  * add element
  * remove element
  * double the size 
* vector example
  * `push_back()`
  * `pop_back()`
  * `size()`
  * `capacity()`

## Day 25 ([PDF](/PDF_Notes/Day-25.pdf))
* `cstring` header
  * `strlen()`
  * `strcpy()`
  * `strcmp()`
  * `strcat()`
  * `strchr()`
* `cctype` header
  * `isalnum()`
  * `isalpha()`
  * `isdigit()`
  * `islower()`
  * `isupper()`
  * `ispunct()`
  * `isspace()`
  * `toupper()`
  * `tolower()`

## Assignment Test 1 
* [Questions](/Assignment_1/Assignment_Questions.pdf)
* [Result](/Assignment_1/Result.pdf)

## Day 26 ([PDF](/PDF_Notes/Day-26.pdf))
* file handling 
  * `ofstream`
    * `open()` method
    * open using constructor call
    * create file / overwrite file
    * write using `<<` operator
    * append text using `ios::app`
    * `close()` method
    * create `csv` file
  * `ifstream`
    * `open()` method
    * open using constructor call
    * read file using `>>` operator
    * read lines using `getline()`
    * create function for read a specific line
    * read data from `csv` filearee 

## Day 27 ([PDF](/PDF_Notes/Day-27.pdf))
* File Handling 
  * read string and convert to structure 
  * implement search function for file
  * `fstream`
    * `ios::in`
    * `ios::out`
    * `ios::app`
  * read and write at same time
  * `eof()`
  * `fail()`
  * `good()`
  * `bad()`

## Project 1 - Bank Application
* [Open Details](/Project/BankApplication.cpp)

## Day 28 ([PDF](/PDF_Notes/Day-28.pdf))
* Function Prototypes
* Functions to process array (const pointers)
* Function using Array Ranges
* Return c-string 
* Recursion 

## Assignment Test 2
* [Questions](/Assignment_2/Assignment_Questions.pdf)

## Day 29 ([PDF](/PDF_Notes/Day-29.pdf))
* Pointer to Function

## Day 30 ([PDF](/PDF_Notes/Day-30.pdf))
* Inline Function
* Macro Function
* Const reference in parameter
* Return reference 

## Day 31 ([PDF](/PDF_Notes/Day-31.pdf))
* Return pointer
* Default Arguments
* Function Templates
* Explicit Specialization 
* Trailing return type `->`

## Day 32 ([PDF](/PDF_Notes/Day-32.pdf))
* Namespace
  * `namespace`
  * scope resolution operator `::`
  * `using`
  * namespace aliasing
* Classes
  * `class` declaration
  * `class` vs `struct`
  * member variables
  * member methods
  * object
  * access modifiers
    * public 
    * private
    * protected
    
## Day 33 ([PDF](/PDF_Notes/Day-33.pdf))
* Constructor
  * Default Constructor
  * Parameterized Constructor
* Constructor Overloading
* `this` pointer
* Data Hiding
* Encapsulation

## Day 34 ([PDF](/PDF_Notes/Day-34.pdf))
* Object initialization
```C++
  Cube c1;        // Default Constructor
  Cube c2();      // Function Declaration (Object Not Created)
  Cube c3(10);    // Parameterized Constructor
  Cube c4{};      // Uniform Initialization with Default Constructor
  Cube c5{10};    // Uniform Initialization with Parameterized Constructor
  Cube c6 = {};   // Assignment Initialization with Default Constructor
  Cube c7 = {10}; // Assignment Initialization with Parameterized Constructor
  Cube c8 = 10;   // Default Constructor (works if class have only one data member)
```
* Distructor 
* Object in heap using `new` & `delete`
* Life of an Object 
  * In block
  * In stack
  * In heap

## Day 35 - Extra Class ([PDF](/PDF_Notes/Day-35.pdf))
* Return array of string
* `getline()` vs `cin.getline()`
* Return address of local stack variable
* Access the value of deallocated memory 
  * In Stack
  * In Heap
