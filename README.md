*This activity has been created as part of the 42 curriculum by mabani-h.*

# ft_printf

## Description

The ft_printf project is a recreation of the standard C library function printf(). Its goal is to understand variadic functions, formatted output, and argument handling in C.

The function processes a format string and prints characters, strings, integers, pointer addresses, and hexadecimal values according to the specified conversion rules.

### Supported Conversions

* %c: Prints a single character.
* %s: Prints a string.
* %p: Prints a pointer address in hexadecimal format.
* %d: Prints a signed decimal integer.
* %i: Prints an integer.
* %u: Prints an unsigned decimal integer.
* %x: Prints a hexadecimal number using lowercase letters.
* %X: Prints a hexadecimal number using uppercase letters.
* %%: Prints a percent sign.

## Instructions

### Compilation

Run the following command to compile the library:

```
make
```

This generates the static library ft_printf.a or libftprintf.a, depending on the library name defined in the Makefile.

### Makefile Rules

* make: Compiles the source files and creates the library.
* make clean: Removes object files.
* make fclean: Removes object files and the library.
* make re: Rebuilds the library from scratch.

### Usage

Include the project header in your C source file:

```
#include "ft_printf.h"
```

Compile your program with the library:

```
cc main.c -L. -lftprintf -o test
```

Run the executable:

```
./test
```

Example:

```
ft_printf("Hello %s, number: %d\n", "world", 42);
ft_printf("Hexadecimal: %x\n", 255);
ft_printf("Pointer: %p\n", (void *)ptr);
```

## Resources

* The 42 ft_printf subject.
* C documentation and standard library references.
* Documentation about variadic functions: va_start, va_arg, va_copy, and va_end.
* Documentation about the write() system call.
* Educational resources about pointers, hexadecimal representation, and integer conversions.

### AI Usage

AI tools were used to clarify C programming concepts, understand variadic functions, and troubleshoot implementation issues. Documentation and educational resources were also used to support learning and development.

## Algorithm and Data Structure

The implementation traverses the format string character by character. Regular characters are printed directly using write(). When a percent sign is encountered, the next character is examined to determine which conversion is required.

Variadic arguments are accessed using the macros provided by stdarg.h. Each conversion specifier is handled according to its expected argument type.

The implementation uses sequential string traversal and helper functions to separate the conversion logic. This approach keeps the code modular, simplifies testing, and makes debugging easier.

## Author

Mayar bani-hamad
