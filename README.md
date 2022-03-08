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
