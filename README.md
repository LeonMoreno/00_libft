<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/LeonMoreno/00_libft?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/LeonMoreno/00_libft/?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/LeonMoreno/00_libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/LeonMoreno/00_libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/LeonMoreno/00_libft?color=green" />
</p>

</p>


## 💡 About the project

	🚀 TLDR: This project gives you the opportunity to rewrite basic C functions to understand them
	and learn how to use them. The library will help you for your future projects in C.

## Key points:

* Deep understanding of many standard C library functions.
* Integration of header, main and function files.
* Compiling using a Makefile.
* Strings and memory manipulation.
* Linked lists manage.

## Objectives:

* Basics of C.
* Libc.
* Generation of a static library.

## Skills:

* Imperative programming.
* Rigor.
* Algorithms & AI.

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](/src/ft_is//ft_isascii.c)		- test for ASCII character.
* [`ft_isalnum`](/src/ft_is//ft_isalnum.c)		- alphanumeric character test.
* [`ft_isalpha`](/src/ft_is//ft_isalpha.c)		- alphabetic character test.
* [`ft_islower`](/src/ft_is//ft_isalpha.c) *		- lower-case character test.
* [`ft_isupper`](/src/ft_is//ft_isalpha.c) *		- upper-case character test.
* [`ft_isdigit`](/src/ft_is//ft_isdigit.c)		- decimal-digit character test.
* [`ft_isprint`](/src/ft_is//ft_isprint.c)		- printing character test (space character inclusive).
* [`ft_tolower`](/src/ft_to/ft_tolower.c)		- upper case to lower case letter conversion.
* [`ft_toupper`](/src/ft_to/ft_toupper.c)		- lower case to upper case letter conversion.


### Functions from `<stdlib.h>` library

* [`ft_atoi`](/src/ft_to/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](/src/ft_mem/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](/src/ft_mem/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](/src/ft_mem/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](/src/ft_mem/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](/src/ft_mem/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](/src/ft_mem/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](/src/ft_mem/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](/src/ft_str/ft_strlen.c)				- find length of string.
* [`ft_strchr`](/src/ft_str/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](/src/ft_str/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](/src/ft_str/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](/src/ft_str/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strcpy`](/src/ft_str/ft_strcpy.c) *		- copy strings.
* [`ft_strdup`](/src/ft_str/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](/src/ft_str/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](/src/ft_str/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions
##### FT_PUT
* [`ft_putchar_fd`](/src/ft_put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](/src/ft_put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](/src/ft_put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](/src/ft_put/ft_putnbr_fd.c)		- output integer to given file.

##### FT_TO
* [`ft_itoa`](/src/ft_to/ft_itoa.c)					- convert integer to ASCII string.

##### FT_STR
* [`ft_substr`](/src/ft_str/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](/src/ft_str/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](/src/ft_str/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](/src/ft_str/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](/src/ft_str/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](/src/ft_lst/ft_striteri.c)				- apply a function to each character of a string.


##### Linked list functions
* [`ft_lstnew`](/src/ft_lst/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](/src/ft_lst/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](/src/ft_lst/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](/src/ft_lst/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](/src/ft_lst/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](/src/ft_lst/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](/src/ft_lst/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](/src/ft_lst/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](/src/ft_lst/ft_lstmap.c)				- apply function to content of all list's elements into new list.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

 Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile les .c et créer libft.a  	|
| `make clean`    | Supprime les .o.  	|
| `make flcean`  	| Supprime les .o et libft.a.  	|
| `make re`     	| Exécute fclean et make.  	|
| `make bonus`          | For bonus functions.        |
| `make norm`          | Verification with the norminettes. |


**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

`gcc [main] libft.a && ./a.out` | Compile a main with the library, and then execute the program.


## 📋 Third-party testers

You can use any of this third party testers to test the project

* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
