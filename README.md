# Libft project

## Introduction

The 'Libft' project at 42 Coding School was a crucial part of my journey to mastering the C programming language. In this assignment, I had the opportunity to recreate various standard library functions and develop additional utility functions that I could utilize in future projects. This hands-on experience allowed me to dive deep into the complexities of memory management, string manipulation, and data structures. Creating my own library taught me the significance of modular programming and code reusability, which are essential skills for efficient coding practices. This project was a foundation for more complex assignments and equipped me with valuable experience.

## Description of the functions

### Character Checking Functions

    ft_isalnum.c: Checks if a character is alphanumeric.
    ft_isalpha.c: Checks if a character is an alphabetic character.
    ft_isascii.c: Checks if a character is an ASCII character.
    ft_isdigit.c: Checks if a character is a digit.
    ft_isprint.c: Checks if a character is printable.

### String Manipulation Functions

    ft_strcat.c: Concatenates two strings.
    ft_strchr.c: Locates the first occurrence of a character in a string.
    ft_strcmp.c: Compares two strings.
    ft_strcpy.c: Copies a string.
    ft_strdup.c: Duplicates a string.
    ft_strlen.c: Returns the length of a string.
    ft_strncat.c: Concatenates two strings, using at most n bytes.
    ft_strncmp.c: Compares two strings up to n characters.
    ft_strncpy.c: Copies a string, up to n characters.
    ft_strnstr.c: Locates a substring in a string, searching only the first n bytes.
    ft_strrchr.c: Locates the last occurrence of a character in a string.
    ft_strstr.c: Locates a substring in a string.

### String Modification Functions

    ft_strclr.c: Sets every character of a string to '\0'.
    ft_strdel.c: Frees a string and sets its pointer to NULL.
    ft_strequ.c: Compares two strings for equality.
    ft_striter.c: Applies a function to each character of a string.
    ft_striteri.c: Applies a function to each character of a string, passing the index as an argument.
    ft_strjoin.c: Concatenates two strings, allocating new memory.
    ft_strlcat.c: Size-bounded string concatenation.
    ft_strmap.c: Applies a function to each character of a string, creating a new string.
    ft_strmapi.c: Applies a function to each character of a string, with an index, creating a new string.
    ft_strnequ.c: Compares two strings for equality, up to n characters.
    ft_strnew.c: Allocates a new string of a given size.
    ft_strsplit.c: Splits a string into an array of strings based on a delimiter.
    ft_strsub.c: Creates a substring from a string.
    ft_strtrim.c: Trims leading and trailing whitespace from a string.

### Memory Management Functions

    ft_memalloc.c: Allocates and zeroes memory.
    ft_memccpy.c: Copies memory until a character is encountered.
    ft_memchr.c: Searches for a character in a memory block.
    ft_memcmp.c: Compares two memory blocks.
    ft_memcpy.c: Copies memory.
    ft_memdel.c: Frees a memory block and sets its pointer to NULL.
    ft_memmove.c: Copies memory, handling overlapping regions.
    ft_memset.c: Sets a memory block to a given value.

### Linked List Functions

    ft_lstadd.c: Adds a new element at the beginning of a list.
    ft_lstdel.c: Deletes and frees a list.
    ft_lstdelone.c: Deletes and frees an element of a list.
    ft_lstiter.c: Iterates over a list and applies a function to each element.
    ft_lstmap.c: Iterates over a list and applies a function to each element, creating a new list.
    ft_lstnew.c: Creates a new list element.

### Conversion Functions

    ft_atoi.c: Converts a string to an integer.
    ft_itoa.c: Converts an integer to a string.

### Output Functions

    ft_putchar.c: Writes a character to standard output.
    ft_putchar_fd.c: Writes a character to a given file descriptor.
    ft_putendl.c: Writes a string followed by a newline to standard output.
    ft_putendl_fd.c: Writes a string followed by a newline to a given file descriptor.
    ft_putnbr.c: Writes an integer to standard output.
    ft_putnbr_fd.c: Writes an integer to a given file descriptor.
    ft_putstr.c: Writes a string to standard output.
    ft_putstr_fd.c: Writes a string to a given file descriptor.

### Case Conversion Functions

    ft_tolower.c: Converts an uppercase character to lowercase.
    ft_toupper.c: Converts a lowercase character to uppercase.

### Miscellaneous Functions

    ft_wordcnt.c: Counts the number of words in a string, separated by a specific delimiter.
## Usage

To use the library, clone the repository and compile the library using the 'make' command:

```bash
git clone https://github.com/spushkin/libft.git
cd libft
make
```
Please also include the 'libft.h' header in you C Project:

```console
#include "libft.h"
```
