alx-low_level_programming - Makefiles

This repository contains a collection of Makefiles for building the "school" executable. The Makefiles are progressively improved and expanded to meet various requirements.

Table of Contents
0-Makefile
1-Makefile
2-Makefile
3-Makefile
4-Makefile
5-island_perimeter.py
100-Makefile

0-Makefile
This Makefile creates the "school" executable by compiling the "main.c" and "school.c" files without any additional variables.

Usage:
make -f 0-Makefile

1-Makefile
In this Makefile, we introduce variables "CC" and "SRC" to specify the compiler and source files to build the "school" executable.

Usage:
make -f 1-Makefile

2-Makefile
The 2-Makefile adds more variables: "OBJ" to store the object files and "NAME" to specify the name of the executable. The Makefile only recompiles the updated source files.

Usage:
make -f 2-Makefile

3-Makefile
This Makefile introduces additional rules: "clean," "oclean," "fclean," and "re" to handle cleaning and recompilation of source files. It uses the "RM" variable to delete files.

Usage:
make -f 3-Makefile [rule]

4-Makefile
The 4-Makefile enhances the compilation process by adding the "CFLAGS" variable to set compiler flags like "-Wall -Werror -Wextra -pedantic."

Usage:
make -f 4-Makefile [rule]

5-island_perimeter.py
This file contains a Python function "island_perimeter(grid)" that calculates the perimeter of an island represented in a grid.

100-Makefile
The 100-Makefile is an advanced version of the Makefile. It uses advanced techniques to handle the build process without explicit rules for each object file. The Makefile also respects the restrictions specified in the requirements.

Usage:
make -f 100-Makefile [rule]

Author: Glamour95
