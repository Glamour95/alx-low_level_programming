###Dynamic Library - libdynamic.so

###This repository contains a dynamic library named libdynamic.so that includes various functions. The library is built to provide utility functions for common operations.

###Functions Included

###The library libdynamic.so includes the following functions:

***int _putchar(char c);
***int _islower(int c);
***int _isalpha(int c);
***int _abs(int n);
***int _isupper(int c);
***int _isdigit(int c);
***int _strlen(char *s);
***void _puts(char *s);
***char *_strcpy(char *dest, char *src);
***int _atoi(char *s);
***char *_strcat(char *dest, char *src);
***char *_strncat(char *dest, char *src, int n);
***char *_strncpy(char *dest, char *src, int n);
***int _strcmp(char *s1, char *s2);
***char *_memset(char *s, char b, unsigned int n);
***char *_memcpy(char *dest, char *src, unsigned int n);
***char *_strchr(char *s, char c);
***unsigned int _strspn(char *s, char *accept);
***char *_strpbrk(char *s, char *accept);
***char *_strstr(char *haystack, char *needle);

###Usage

***To use the libdynamic.so library, follow the steps below:

###Clone the GitHub repository alx-low_level_programming to your local machine.

***Navigate to the directory 0x18-dynamic_libraries.

***Compile your desired program, including libdynamic.so by specifying the library with the -ldynamic flag. For example, gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len.

***Set the LD_LIBRARY_PATH environment variable to include the current directory: export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH.

###Execute the program: ./len.

***The program will utilize functions from the libdynamic.so library and provide the desired output.
***Additional Files

***The repository also includes the following additional files:

###main.h: Contains the prototypes of all the functions included in libdynamic.so.
***1-create_dynamic_lib.sh: A script that creates a dynamic library named liball.so by compiling all the .c files present in the current directory.
