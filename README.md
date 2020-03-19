# _printf

# Installation

To install _printf you need to download all files from the repository or clone it to a folder, compile and execute this function.

# Synopsis

This is a sample and implementation of the printf function that formats and prints data
The _printf function prints on-screen according to a format described below. Returns the count of printed characters when the function is successful and -1 when the function fails.

The specifiers ares:

*  %c: Prints a single character.
*  %s: Prints a string of characters.
*  %d: Prints integers.
*  %i: Prints integers.

# General features

* All our files will be compiled on Ubuntu 14.04 LTS.
* We compile with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
* The prototypes of all functions should be included in the header file called holberton.h

 # Example

	#include "holberton.h"
	#include <stdio.h>


	int main(void)
	{
	int a;
	int b;
	char *str;

	str = "school";
	a = _printf("%r\n", "Holberton"); /*expected: notrebloh*/
	printf("--->%d\n", a); /*expected: 10*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/
	return (0);
	}

# Team

For the preparation of this project we worked in unity with Luis Alejandro Marin Cuéllar and Felipe Serna, students of Software Engineering at Holberton School from Cohort 11.
