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

## Standard C Library Functions

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memccpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strnstr
- ft_strncmp
- ft_atoi
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower
## Additional Functions
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
## Bonus Functions
- ft_lstadd_back
- ft_lstadd_front
- ft_lstclear
- ft_lstdelone
- ft_lstiter
- ft_lstlast
- ft_lstmap
- ft_lstnew
- ft_lstsize
## Tests
To test the library functions, you can use the provided Makefile to compile unit tests:
```bash
make
```
This will run a series of tests to verify the correct operation of the implemented functions.
## Author
- rdedola
## License
This project is licensed under the MIT License - see the LICENSE file for details.
