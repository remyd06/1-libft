# Libft

Libft is a library of basic C functions, recreated as part of an educational project to better understand the internal workings of standard functions and to be able to use my own library throughout my studies.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Implemented Functions](#implemented-functions)
- [Tests](#tests)
- [Author](#author)
- [License](#license)

## Introduction

Libft is a project from the 42 school, which involves recreating a series of standard functions from the C library. The main objective is to gain a deep understanding of these functions and to develop a personal library that can be reused for future projects.

## Features

- Implementation of standard C library functions
- Deep understanding of algorithms and data structures
- Use of this library in future projects

## Installation

Clone the GitHub repository to your local machine:

```bash
git clone [https://github.com/your_username/libft.git](https://github.com/remyd06/1-libft.git)
cd libft
```

Compile the library:
```bash
make
```

This generates a libft.a file that you can include in your C projects.

## Usage
To use Libft in your projects, simply include the header file and link the compiled library:
```bash
#include "libft.h"
```
## Implemented Functions
Here is a list of the functions implemented in this library. For more details, refer to the source files in the repository.

## Functions from `<ctype.h>`

- [x] [`ft_isalnum`](https://github.com/remyd06/1-libft/blob/main/ft_isalnum.c) - Checks for an alphabetic or a digit character.
- [x] [`ft_isalpha`](https://github.com/remyd06/1-libft/blob/main/ft_isalpha.c) - Checks for an alphabetic character.
- [x] [`ft_isascii`](https://github.com/remyd06/1-libft/blob/main/ft_isascii.c) - Checks for an ASCII character.
- [x] [`ft_isdigit`](https://github.com/remyd06/1-libft/blob/main/ft_isdigit.c) - Checks for a digit character.
- [x] [`ft_isprint`](https://github.com/remyd06/1-libft/blob/main/ft_isprint.c) - Checks for a printable character
- [x] [`ft_tolower`](https://github.com/remyd06/1-libft/blob/main/ft_tolower.c) - Converts a character its lowercase equivalent.
- [x] [`ft_toupper`](https://github.com/remyd06/1-libft/blob/main/ft_toupper.c) - Converts a character its upperercase equivalent.

## Functions from `<string.h>`

- [x] [`ft_bzero`](https://github.com/remyd06/1-libft/blob/main/ft_bzero.c) - Replaces bytes with `\0`.
- [x] [`ft_memchr`](https://github.com/remyd06/1-libft/blob/main/ft_memchr.c) - Scans a byte in a pointer.
- [x] [`ft_memcmp`](https://github.com/remyd06/1-libft/blob/main/ft_memcmp.c) - Compares two pointers.
- [x] [`ft_memcpy`](https://github.com/remyd06/1-libft/blob/main/ft_memcpy.c) - Copies two pointers.
- [x] [`ft_memmove`](https://github.com/remyd06/1-libft/blob/main/ft_memmove.c) - Copies two pointer without overlap.
- [x] [`ft_memset`](https://github.com/remyd06/1-libft/blob/main/ft_memset.c) - Replaces bytes in a pointer.
- [x] [`ft_strchr`](https://github.com/remyd06/1-libft/blob/main/ft_strchr.c) - Scans a character in a string.
- [x] [`ft_strdup`](https://github.com/remyd06/1-libft/blob/main/ft_strdup.c) - Duplicates and allocates a string.
- [x] [`ft_strlcat`](https://github.com/remyd06/1-libft/blob/main/ft_strlcat.c) - Concatenates two strings with a specified length.
- [x] [`ft_strlcpy`](https://github.com/remyd06/1-libft/blob/main/ft_strlcpy.c) - Copies a string with a specified length.
- [x] [`ft_strlen`](https://github.com/remyd06/1-libft/blob/main/ft_strlen.c) - Calculates the length of a string.
- [x] [`ft_strncmp`](https://github.com/remyd06/1-libft/blob/main/ft_strncmp.c) - Compares two strings with a specified length.
- [x] [`ft_strnstr`](https://github.com/remyd06/1-libft/blob/main/ft_strnstr.c) - Scans a substring in a string.
- [x] [`ft_strrchr`](https://github.com/remyd06/1-libft/blob/main/ft_strrchr.c) - Scans a character in a string in reverse.

## Functions from `<stdlib.h>`

- [x] [`ft_atoi`](https://github.com/remyd06/1-libft/blob/main/ft_atoi.c) - String to Integer
- [x] [`ft_calloc`](https://github.com/remyd06/1-libft/blob/main/ft_calloc.c) - Allocates and replaces bytes with `\0`.
- [x] [`ft_itoa`](https://github.com/remyd06/1-libft/blob/main/ft_itoa.c) - Integer to String

## Non-Standard Functions

- [x] [`ft_putchar_fd`](https://github.com/remyd06/1-libft/blob/main/ft_putchar_fd.c) - Prints a character.
- [x] [`ft_putendl_fd`](https://github.com/remyd06/1-libft/blob/main/ft_putendl_fd.c) - Prints a string followed by a newline.
- [x] [`ft_putnbr_fd`](https://github.com/remyd06/1-libft/blob/main/ft_putnbr_fd.c) - Prints an integer.
- [x] [`ft_putstr_fd`](https://github.com/remyd06/1-libft/blob/main/ft_putstr_fd.c) - Prints a string.
- [x] [`ft_split`](https://github.com/remyd06/1-libft/blob/main/ft_split.c) - Splits a string into an array of strings.
- [x] [`ft_striteri`](https://github.com/remyd06/1-libft/blob/main/ft_striteri.c) - Applies a function to every characters of a string.
- [x] [`ft_strjoin`](https://github.com/remyd06/1-libft/blob/main/ft_strjoin.c) - Concatenates and allocates two strings.
- [x] [`ft_strmapi`](https://github.com/remyd06/1-libft/blob/main/ft_strmapi.c) - Applies a function to every characters of a string and allocates them.
- [x] [`ft_strtrim`](https://github.com/remyd06/1-libft/blob/main/ft_strtrim.c) - Trims the beginning and end of a string.
- [x] [`ft_substr`](https://github.com/remyd06/1-libft/blob/main/ft_substr.c) - Cuts and allocates a string.

## Bonus Functions

- [x] [`ft_lstadd_back`](https://github.com/remyd06/1-libft/blob/main/ft_lstadd_back.c) - Adds an node at the end of a list.
- [x] [`ft_lstadd_front`](https://github.com/remyd06/1-libft/blob/main/ft_lstadd_front.c) - Adds an node at the beginning of a list.
- [x] [`ft_lstclear`](https://github.com/remyd06/1-libft/blob/main/ft_lstclear.c) - Deletes and frees a list.
- [x] [`ft_lstdelone`](https://github.com/remyd06/1-libft/blob/main/ft_lstdelone.c) - Deletes and frees a node with an applied function.
- [x] [`ft_lstiter`](https://github.com/remyd06/1-libft/blob/main/ft_lstiter.c) - Applies a function to every nodes of a list.
- [x] [`ft_lstlast`](https://github.com/remyd06/1-libft/blob/main/ft_lstlast.c) - Returns the last node of a list.
- [x] [`ft_lstmap`](https://github.com/remyd06/1-libft/blob/main/ft_lstmap.c) - Applies a function to every nodes of a list.
- [x] [`ft_lstnew`](https://github.com/remyd06/1-libft/blob/main/ft_lstnew.c) - Creates a new list.
- [x] [`ft_lstsize`](https://github.com/remyd06/1-libft/blob/main/ft_lstsize.c) - Calculates the size of a list.
## Tests
To test the library functions, you can use the provided Makefile to compile unit tests:
```bash
make
```
This will run a series of tests to verify the correct operation of the implemented functions.
## Clean
To clean your folder after the "make" you have to use this command:
```bash
make fclean
```
## Author
- rdedola
## License
This project is licensed under the MIT License - see the LICENSE file for details.
