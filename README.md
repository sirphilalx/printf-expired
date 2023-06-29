# 0x11. C - printf

This is a project to test our abilities of writing functional C programs. We have been tasked with writing the printf function that imitates the C standard printf function.

We have been paired in twos to work on this project.

## Authors
    - Philemon Okpokpa
        - Twitter: [twitter handle](twitter.com/philiwonder)
        - GitHub: [github profile](github.com/sirphilalx)
    - Osonye Onyemazuwa (HiRen)
        - Twitter: [twitter handle](twitter.com/HiRen0011)
        - GitHub: [github profile](github.com/Hi-Ren11)

## Requirements
### General
    - Allowed editors: vi, vim, emacs
    - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    - All your files should end with a new line
    - A README.md file, at the root of the folder of the project is mandatory
    - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    - You are not allowed to use global variables
    - No more than 5 functions per file
    - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    - The prototypes of all your functions should be included in your header file called main.h
    - Don’t forget to push your header file
    - All your header files should be include guarded
    - Note that we will not provide the _putchar function for this project

## GitHub
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

## Authorized functions and macros
    - write (man 2 write)
    - malloc (man 3 malloc)
    - free (man 3 free)
    - va_start (man 3 va_start)
    - va_end (man 3 va_end)
    - va_copy (man 3 va_copy)
    - va_arg (man 3 va_arg)

## Copyright - Plagiarism
    - You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
    - You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
    - You are not allowed to publish any content of this project.
    - Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Tasks and Files
1. Write a function that produces output according to a format.
    - Prototype: int _printf(const char *format, ...);
    - Returns: the number of characters printed (excluding the null byte used to end output to strings)
    - write output to stdout, the standard output stream
    - format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
        - c
        - s
        - %
    - You don’t have to reproduce the buffer handling of the C library printf function
    - You don’t have to handle the flag characters
    - You don’t have to handle field width
    - You don’t have to handle precision
    - You don’t have to handle the length modifiers

2. Handle the following conversion specifiers:
    - d
    - i
    - You don’t have to handle the flag characters
    - You don’t have to handle field width
    - You don’t have to handle precision
    - You don’t have to handle the length modifiers

3. Handle the following custom conversion specifiers:
    - b: the unsigned int argument is converted to binary

4. Handle the following conversion specifiers:
    - u
    - o
    - x
    - X
    - You don’t have to handle the flag characters
    - You don’t have to handle field width
    - You don’t have to handle precision
    - You don’t have to handle the length modifiers

5. Use a local buffer of 1024 chars in order to call write as little as possible.

6. Handle the following custom conversion specifier:
    - S : prints the string.
    - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

7. Handle the following conversion specifier: p.
    - You don’t have to handle the flag characters
    - You don’t have to handle field width
    - You don’t have to handle precision
    - You don’t have to handle the length modifiers

8. Handle the following flag characters for non-custom conversion specifiers:
    - +
    - space
    - #

9. Handle the following length modifiers for non-custom conversion specifiers:
    - l
    - h
   Conversion specifiers to handle: d, i, u, o, x, X

10. Handle the field width for non-custom conversion specifiers.

11. Handle the precision for non-custom conversion specifiers.

12. Handle the 0 flag character for non-custom conversion specifiers.

13. Handle the - flag character for non-custom conversion specifiers.

14. Handle the following custom conversion specifier:
    - r : prints the reversed string

15. Handle the following custom conversion specifier:
    - R: prints the rot13'ed string

16. All the above options work well together.

All of these have been worked on by Phil and HiRen and should not be copied. It is a prerequisite assignment/task for the alx cohort 15 software engineering program.

(c) 2023 by authors and alx
