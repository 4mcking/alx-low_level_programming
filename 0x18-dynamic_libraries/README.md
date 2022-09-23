# C - Dynamic libraries

In this project, I learned about using dynamic libraries in C, including how to create
them and how to use them with `$LD_LIBRARY_PATH`, `nm`, `ldd`, and `ldconfig`.

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libdynamic.so](./libdynamic.so): C dynamic library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libdynamic.so`.

* **1. Without libraries what have we? We have no past and no future**
  * [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh): Bash script that creates a
  dynamic library called `liball.so` from all the `.c` files in the current directory.

* **2. Let's call C functions from Python**
  * [100-operations.so](./100-operations.so): C dynamic library containing basic C
  mathematical operation functions that can be called from Python.
  * Includes:
    * `int add(int a, int b);`
    * `int sub(int a, int b);`
    * `int mul(int a, int b);`
    * `int div(int a, int b);`
    * `int mod(int a, int b);`

* **3. Code injection: Win the Giga Millions!**
  * [101-make_me_win.sh](./101-make_me_win.sh): I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on   the same server where the Giga Millions program runs, could you make me win the Jackpot?
  Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
    * You can’t modify the program `gm` itself as Master Sysadmin Sylvain (MSS) always checks its [MD5](https://alx-intranet.hbtn.io/rltoken/njnwPTMpc1-RSp5sVEAyfg) before running it
    * The system is an `Linux Ubuntu 16.04`
    * The server has internet access
    * Our mole will be only able to run two commands from a shell script, without being detected by MSS
    * Your shell script should be maximum 3 lines long. You are not allowed to use `;`, `&&`, `||`, `|`, (it would be detected by MSS), and have a maximum of two commands
    * Our mole has only the authorization to upload one file on the server. It will be your shell script
    * Our mole will run your shell script this way: `mss@gm_server$ . ./101-make_me_win.sh`
    * Our mole will run your shell script from the same directory containing the program `gm`, exactly 98 seconds before MSS runs `gm` with my numbers: `./gm 9 8 10 24 75 9`
    * MSS will use the same terminal and session than our mole
    * Before running the `gm program, MSS always check the content of the directory
    * MSS always exit after running the program `gm`
    * TL;DR; This is what is going to happen
