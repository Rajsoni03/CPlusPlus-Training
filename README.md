# CPlusPlus-Training

## Day 1
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

