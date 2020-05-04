# 0x18. C - Dynamic libraries

> This directory contains all the tasks of the project "0x18. C - Dynamic libraries" at Holberton School.

> Project made at [Holberton School](https://www.holbertonschool.com "Holberton School.") for educational purpose.

## General Objectives

* What is a dynamic library, how does it work, how to create one, and how to use it.
* What is the environment variable $LD_LIBRARY_PATH and how to use it.
* What are the differences between static and shared libraries.
* Basic usage nm, ldd, ldconfig.

## Basic info

Dynamic Libraries or Shared libraries are libraries that are loaded by programs when they start. When a shared library is installed properly, all programs that start afterwards automatically use the new shared library. It's actually much more flexible and sophisticated than this, because the approach used by Linux permits you to:

* Update libraries and still support programs that want to use older, non-backward-compatible versions of those libraries;

* Override specific libraries or even specific functions in a library when executing a particular program.

* Do all this while programs are running using existing libraries.

### Creating A Shared "C" Library Using "ld"

 The creation of a shared library is rather similar to the creation of a static library. Compile a list of object files, then insert them all into a shared library file. However, there are two major differences:

* Compile for "Position Independent Code" (PIC) - When the object files are generated, we have no idea where in memory they will be inserted in a program that will use them. Many different programs may use the same library, and each load it into a different memory in address. Thus, we need that all jump calls ("goto", in assembly speak) and subroutine calls will use relative addresses, and not absolute addresses. Thus, we need to use a compiler flag that will cause this type of code to be generated.
* In most compilers, this is done by specifying '-fPIC' or '-fpic' on the compilation command.
* Library File Creation - unlike a static library, a shared library is not an archive file. It has a format that is specific to the architecture for which it is being created. Thus, we need to use the compiler (either the compiler's driver, or its linker) to generate the library, and tell it that it should create a shared library, not a final program file.
* This is done by using the '-G' flag with some compilers, or the '-shared' flag with other compilers. 

Thus, the set of commands we will use to create a shared library, would be something like this:

```
gcc -fPIC -c util_file.c
gcc -fPIC -c util_net.c
gcc -fPIC -c util_math.c
gcc -shared libutil.so util_file.o util_net.o util_math.o
```

## Directory Files

| **File** | **Description** |
|----------|-----------------|
| [0. A library is not a luxury but one of the necessities of life](./libholberton.so) | Create the dynamic library libholberton.so containing all the functions listed. - libholberton.so file |
| [0. A library is not a luxury but one of the necessities of life](./holberton.h)) | Create the dynamic library libholberton.so containing all the functions listed. holberton.h file |
| [1. Without libraries what have we? We have no past and no future](./1-create_dynamic_lib.sh) | Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory. |
| [3. Let's call C functions from Python](./100-operations.so) | I know, youre missing C when coding in Python. So lets fix that! Create a dynamic library that contains C functions that can be called from Python. See example for more detail. |
| [4. Code injection: Win the Giga Millions!](./101-make_me_win.sh) | I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot? |

## Author

* [GitHub - Luis Miguel Vargas](https://github.com/luismvargasg)

* [LinkedIn - Luis Miguel Vargas](https://www.linkedin.com/in/luismvargasg/)