
# Printf Project

## Description

This project aims to implement a simplified version of the `printf` function in C. The implementation follows the requirements specified below.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with specific options (`-Wall -Werror -Wextra -pedantic -std=gnu89`)
- All files should end with a new line
- A README.md file is mandatory
- Code should use the Betty style
- No global variables allowed
- Maximum of 5 functions per file
- Prototypes of all functions should be included in the header file (`main.h`)
- Header files should be include guarded

### Printf Function
- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- Writes output to stdout
- Handles the following conversion specifiers: `%c`, `%s`, `%%`
- Does not handle buffer handling, flag characters, field width, precision, or length modifiers

### Supported Conversion Specifiers
- `c`: character
- `s`: string
- `%`: percent sign

### Repo
- One project repository per group
- Other members should not fork the project to ensure only one team member has the repository in their GitHub account
- Plagiarism is strictly forbidden
- Any kind of cheating is detected by <a herf="https://twitter.com/i/status/1651460956600549376"> Kimba bot </a>. Cheating is not an option.

## Compilation
- Code will be compiled using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
- Local buffer of 1024 chars used to minimize calls to `write`

## Tasks
1. Implement the basic `printf` function supporting `%c`, `%s`, and `%%` conversion specifiers
2. Handle conversion specifiers `%d` and `%i`
3. Handle custom conversion specifier `%b` (converts unsigned int to binary)
4. Handle conversion specifiers `%u`, `%o`, `%x`, `%X`
5. Handle custom conversion specifier `%S` (prints string with non-printable characters in hexadecimal format)
6. Handle conversion specifier `%p`
7. Handle flag characters `+`, `space`, `#`
8. Handle length modifiers `l`, `h` for conversion specifiers `%d`, `%i`, `%u`, `%o`, `%x`, `%X`
9. Handle field width
10. Handle precision
11. Handle flag character `0`
12. Handle flag character `-`
13. Handle custom conversion specifier `%r` (prints reversed string)
14. Handle custom conversion specifier `%R` (prints string with ROT13 encoding)
15. All options should work well together

## Installation
To compile the project, run:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

## Usage
To use the `printf` function, include the header file `main.h` in your code and call `_printf` with the desired format string and arguments.

---
