*This project has been created as part of the 42 curriculum by v4lth3r.*

# Description

**Libft** is the first project on common cor from 42 network (1337 School) and focus on build a library from scratch by using C langauge.

This project helps student to understanding C deeper in topics like memory management, pointers, strings, and linked lists. The resulting static library called `libft.a`, can be reused in future 42 projects.

# Instructions
### Compilation
**Clone The Repository**
```bash
git clone <repository-url>
cd libft
```
**Compile the library**
```bash
make
```
This compiles the source files and creates the static library `libft.a`.
Available commands:
```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile the library
```

### Usage
Include the library header in your .c file:
```c
#include "libft.h"
```
Compile your program with the library:
```bash
cc main.c -L. -lft -o program
```
Run the executable:
```bash
./program
```
## Library Contents

Libft contains re-implementations of standard C library functions and additional utility functions.

### 1. Character Classification and Conversion

These functions check character properties or convert character case.

- `ft_isalpha`: checks whether a character is alphabetic.
- `ft_isdigit`: checks whether a character is a digit.
- `ft_isalnum`: checks whether a character is alphanumeric.
- `ft_isascii`: checks whether a character belongs to the ASCII range.
- `ft_isprint`: checks whether a character is printable.
- `ft_toupper`: converts a lowercase letter to uppercase.
- `ft_tolower`: converts an uppercase letter to lowercase.

### 2. String Functions

These functions perform operations on strings.

- `ft_strlen`: calculates the length of a string.
- `ft_strlcpy`: copies a string with a specified size limit.
- `ft_strlcat`: appends a string with a specified size limit.
- `ft_strchr`: searches for a character in a string.
- `ft_strrchr`: searches for the last occurrence of a character.
- `ft_strncmp`: compares two strings up to a specified number of characters.
- `ft_strnstr`: searches for a substring within a string.
- `ft_strdup`: duplicates a string using dynamic memory allocation.
- `ft_substr`: extracts a substring.
- `ft_strjoin`: concatenates two strings.
- `ft_strtrim`: removes specified characters from the beginning and end of a string.
- `ft_split`: splits a string using a delimiter.
- `ft_strmapi`: applies a function to each character and creates a new string.
- `ft_striteri`: applies a function to each character in place.

### 3. Memory Functions

These functions manipulate memory areas.

- `ft_memset`: fills a memory area with a specified byte.
- `ft_bzero`: sets a memory area to zero.
- `ft_memcpy`: copies bytes between non-overlapping memory areas.
- `ft_memmove`: copies bytes while handling overlapping memory areas.
- `ft_memchr`: searches for a byte in a memory area.
- `ft_memcmp`: compares two memory areas.
- `ft_calloc`: allocates zero-initialized memory.

### 4. Conversion Functions

- `ft_atoi`: converts a string to an integer.
- `ft_itoa`: converts an integer to a string.

### 5. File Descriptor Functions

These functions write characters, strings, and numbers to a specified file descriptor.

- `ft_putchar_fd`: writes a character.
- `ft_putstr_fd`: writes a string.
- `ft_putendl_fd`: writes a string followed by a newline.
- `ft_putnbr_fd`: writes an integer.

### 6. Linked List Functions

The linked list functions operate on the `t_list` structure defined in `libft.h`. Each node contains a content pointer and a pointer to the next node.

- `ft_lstnew`: creates a new list node.
- `ft_lstadd_front`: adds a node to the beginning of a list.
- `ft_lstsize`: counts the nodes in a list.
- `ft_lstlast`: returns the last node.
- `ft_lstadd_back`: adds a node to the end of a list.
- `ft_lstdelone`: deletes one node using a supplied deletion function.
- `ft_lstclear`: deletes an entire list.
- `ft_lstiter`: applies a function to every node's content.
- `ft_lstmap`: creates a new list by applying a function to each node's content.


# Resources
- [The official 42 Libft project subject](https://cdn.intra.42.fr/pdf/pdf/226739/en.subject.pdf)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [geeksforgeeks - C](https://www.geeksforgeeks.org/c/c-programming-language/)
- [Makefile Tutorial](https://makefiletutorial.com/)
### AI Usage
AI was used to learn more about C programming, ask questions, clear doubts, and better understand different concepts not for builing.
