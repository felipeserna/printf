# _printf

# Installation

To install _printf you need to download all files from the repository or clone it to a folder, compile and execute this function.
```
$ git clone https://github.com/felipeserna/printf.git
```
# Compilation

* Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use:
```
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```

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

## Features that still need to be implemented

**3. With a face like mine, I do better in print**
Handle the following custom conversion specifiers:

* `b`: the unsigned int argument is converted to binary
```
alex@ubuntu:~/c/printf$ cat main.c
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
```

**4. What one has not experienced, one will never understand in print**
Handle the following conversion specifiers:

* `u`
* `o`
* `x`
* `X`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

**5. Nothing in fine print is ever good news**
Use a local buffer of 1024 chars in order to call `write` as little as possible.

**7. My weakness is wearing too much leopard print**
Handle the following custom conversion specifier:
	* `S` : prints the string.
	* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
```
alex@ubuntu:~/c/printf$ cat main.c
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Holberton\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Holberton\x0ASchool
alex@ubuntu:~/c/printf$
```

**6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print**
Handle the following conversion specifier: `p`.
	* You don’t have to handle the flag characters
	* You don’t have to handle field width
	* You don’t have to handle precision
	* You don’t have to handle the length modifiers

**8. The big print gives and the small print takes away**
Handle the following flag characters for non-custom conversion specifiers:
	* `+`
	* space
	* `#`

**9. Sarcasm is lost in print**
Handle the following length modifiers for non-custom conversion specifiers:
	* `l`
	* `h`
Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

**10. Print some money and give it to us for the rain forests**
Handle the field width for non-custom conversion specifiers.

**11. The negative is the equivalent of the composer's score, and the print the performance**
Handle the precision for non-custom conversion specifiers.

**12. It's depressing when you're still around and your albums are out of print**
Handle the `0` flag character for non-custom conversion specifiers.

**13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection**
Handle the `-` flag character for non-custom conversion specifiers.

**14. Print is the sharpest and the strongest weapon of our party**
Handle the following custom conversion specifier:
	* `r` : prints the reversed string

**15. The flood of print has turned reading into a process of gulping rather than savoring**
Handle the following custom conversion specifier:
	* `R`: prints the rot13'ed string

**16. ***
All the above options work well together.

## Bugs:
No known bugs at this time. Do not hesitate to report bugs to the authors.

## Authors:
Felipe Serna <1509@holbertonschool.com>

Chemical Engineer with skills in the design of industrial processes for the elaboration of new products with added value, taking into account economic, environmental and safety restrictions. Knowledge in water treatment, integrated management systems HSEQ and GLP. High interest in fats and oils, particularly for the manufacture of biodiesel. In his Chemical Engineering thesis he designed and built the first microreactor in Colombia for manufacturing biodiesel.

[LinkedIn profile](https://www.linkedin.com/in/felipesernabarbosa/)

[Twitter](https://twitter.com/felipesernabar1)

[Porfolio Project repository](https://github.com/skillshare-mentorship/holberton-live-experience)

Luis Alejandro Marin Cuellar <luis-alejandro.marin-cuellar@holbertonschool.com>

I am a person who enjoys teamwork, passionate about creating new information media, I have 2 years of experience in the internal communication sector, my domain in Adobe's creative suite is intermediate, standing out in Adobe After Effects, Adobe Premiere , Adobe Illustrator, I am the intellectual creator of an optimization tool for a specific process in the Human Management area of the Imbanaco Medical Center, creator of educational audiovisual content for healthcare personnel in the hospital area, basic knowledge in English, I have a Technician Professional as a Multimedia and Interactive Media Designer at SENA and a 3-semester student in the Information Systems career at the Santiago de Cali University.

[LinkedIn profile](https://www.linkedin.com/in/luis-alejandro-marin-cuellar-0a4353190/)

[Twitter](https://twitter.com/LuisAle59634999)
## License:
Public domain. No copyrights protection.
