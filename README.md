<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/LeonMoreno/42-libft?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/LeonMoreno/42-libft?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/LeonMoreno/42-libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/LeonMoreno/42-libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/LeonMoreno/42-libft?color=green" />
</p>

</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

## 💡 About the project

	🚀 TLDR: This project gives you the opportunity to rewrite basic C functions to understand them
	and learn how to use them. The library will help you for your future projects in C.


**NOTE:** To be successful with moulinette on this project I had to put all the files in the same directory.
Then I have just put them in folders and modified the Makefile to have a better organized repository.

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
* [`ft_strnrcmp`](/src/ft_str/ft_strnrcmp.c)			- reversely compare strings (size-bounded).
* [`ft_strcpy`](/src/ft_str/ft_strcpy.c) *		- copy strings.
* [`ft_strdup`](/src/ft_str/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](/src/ft_str/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](/src/ft_str/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar_fd`](/src/ft_put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](/src/ft_put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](/src/ft_put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](/src/ft_put/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](/src/ft_to/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](/src/ft_str/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](/src/ft_str/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](/src/ft_str/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](/src/ft_str/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](/src/ft_str/ft_strmapi.c)			- create new string from modifying string with specified function.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```

For bonus functions:

```shell
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Verification with The norminette**

To check if all files follow the standard, go to the path and run:

```shell
$ make norm
```

**4. Using it in your code**

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
	
