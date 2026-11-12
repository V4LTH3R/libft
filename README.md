<div align="center">

# 42 School – Libft

This repository contains my implementation of **Libft**, the very first project of the **42 Common Core (1337)**. It is organized to track progress across all mandatory functions, bonus linked-list functions, and compilation rules.

---

## What is Libft?

**Libft** (Library Forty-Two) is a project where you recode a set of standard C library functions from scratch, along with additional utility functions that you will reuse throughout your entire 42 curriculum.

No external libraries allowed (only `<unistd.h>`, `<stdlib.h>`, and `write`, `malloc`, `free`)  
Strict compliance with the **42 Norm**  
Compiled into a static library (`libft.a`) using a custom **Makefile**  

Focus areas:  
**Memory management**  
**String & pointer manipulation**  
**Singly linked lists**  

---

## Subject & Resources

All official project requirements and subject PDFs are available here:  
[`Libft Subject`](https://github.com/V4LTH3R/libft/blob/main/libft.en.subject.pdf) 

Includes:  
Part 1 – Libc functions  
Part 2 – Additional functions  
Bonus Part – Linked list manipulation  
Makefile & Norminette rules  

---

## Progress Tracker – Overview

| Category | Status | Count | Topics |
| :--- | :---: | :---: | :--- |
| **1. Character Classification & Conversion** | ✅ | **7** | ASCII checks & case conversion |
| **2. String Functions** | ✅ | **14** | Length, search, copy, split & iteration |
| **3. Memory Functions** | ✅ | **7** | Raw memory operations & heap allocation |
| **4. Conversion Functions** | ✅ | **2** | String-to-int & int-to-string |
| **5. File Descriptor Functions** | ✅ | **4** | Output to custom file descriptors |
| **6. Linked List Functions** | ✅ | **9** | `t_list` struct & dynamic node management |
| **Build System** | ✅ | — | `Makefile` & `libft.h` (`libft.a`) |

---

## Library Contents

Libft contains re-implementations of standard C library functions and additional utility functions.

### 1. Character Classification and Conversion
*These functions check character properties or convert character case.*

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. String Functions
*These functions perform operations on strings.*

| Function | Description |
| :--- | :--- |
| `ft_strlen` | Calculates the length of a string. |
| `ft_strlcpy` | Copies a string with a specified size limit. |
| `ft_strlcat` | Appends a string with a specified size limit. |
| `ft_strchr` | Searches for a character in a string. |
| `ft_strrchr` | Searches for the last occurrence of a character. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a string. |
| `ft_strdup` | Duplicates a string using dynamic memory allocation. |
| `ft_substr` | Extracts a substring. |
| `ft_strjoin` | Concatenates two strings. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string using a delimiter. |
| `ft_strmapi` | Applies a function to each character and creates a new string. |
| `ft_striteri` | Applies a function to each character in place. |

### 3. Memory Functions
*These functions manipulate memory areas.*

| Function | Description |
| :--- | :--- |
| `ft_memset` | Fills a memory area with a specified byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory areas. |
| `ft_memmove` | Copies bytes while handling overlapping memory areas. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates zero-initialized memory. |

### 4. Conversion Functions

| Function | Description |
| :--- | :--- |
| `ft_atoi` | Converts a string to an integer. |
| `ft_itoa` | Converts an integer to a string. |

### 5. File Descriptor Functions
*These functions write characters, strings, and numbers to a specified file descriptor.*

| Function | Description |
| :--- | :--- |
| `ft_putchar_fd` | Writes a character. |
| `ft_putstr_fd` | Writes a string. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer. |

### 6. Linked List Functions
*The linked list functions operate on the `t_list` structure defined in `libft.h`. Each node contains a `content` pointer and a pointer to the `next` node.*

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node using a supplied deletion function. |
| `ft_lstclear` | Deletes an entire list. |
| `ft_lstiter` | Applies a function to every node's content. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

---

## Usage & Compilation

To compile the library, clone the repository and run `make`:

```bash
git clone https://github.com/V4LTH3R/libft
```
```bash
cd libft
```
```bash
make
```

To use it in your own C projects, include the header and link `libft.a`:

```c
#include "libft.h"
```
```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

---

## Testing & Evaluation

Before submitting to Moulinette, make sure to test edge cases (`NULL` pointers, `SIZE_MAX` overflows, empty strings, memory leaks with `valgrind`) and check Norminette:

* **Norminette**: `norminette`
* **Popular Testers**: [`Sfabi28's libft_tester`](https://github.com/Sfabi28/libft_tester) / [`Tripouille's libftTester`](https://github.com/Tripouille/libftTester)

> Focus on understanding undefined behaviors and memory leaks, not just passing testers.

---

## Important

> Do not copy solutions directly.  
> Write your own code, test every edge case yourself, and learn how `malloc` and pointers behave under the hood.  
> For any questions: Discord username **metaplasticity**  

<p align="center">
<img src="https://img.shields.io/badge/C-A8B9CC?logo=c&logoColor=white">

</p>

</div>
