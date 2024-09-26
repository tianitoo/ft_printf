# **ft_printf** - Custom Implementation of printf

## Overview

The **ft_printf** project is part of the curriculum at [42 Network](https://www.42.fr/), where we are tasked with creating our own version of the standard `printf` function. This custom function mimics the behavior of `printf` in C, supporting several conversion specifiers, flags, field widths, and precisions. It is a key project in mastering string formatting and variadic functions.

## Table of Contents

- [Overview](#overview)
- [Project Structure](#project-structure)
- [Supported Conversions](#supported-conversions)
- [Compilation and Usage](#compilation-and-usage)


## Project Structure

The project is structured into several key components:


- **src/**: Contains the source files for `ft_printf` and utility functions.
- **Makefile**: Used for compiling the library.
- **ft_printf.h**: The header file that contains the function prototypes and necessary definitions.

## Supported Conversions

The `ft_printf` function supports the following conversion specifiers:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer address.
- `%d` or `%i`: Prints a signed decimal integer.
- `%u`: Prints an unsigned decimal integer.
- `%x`: Prints an unsigned hexadecimal integer (lowercase).
- `%X`: Prints an unsigned hexadecimal integer (uppercase).
- `%%`: Prints a percent sign.

## Compilation and Usage

To compile **ft_printf** and generate the library (`libftprintf.a`), run the following commands in the project directory:

```bash
# Compile the library
make

# Clean up object files
make clean

# Clean everything (object files and binary)
make fclean

# Recompile everything
make re
```

### Usage in Projects

You can use **ft_printf** in other projects by linking the library during compilation. Include the `ft_printf.h` header and link the generated static library (`libftprintf.a`):

```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o my_program
```
