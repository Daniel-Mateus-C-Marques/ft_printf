# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C function `printf`.

The objective of this project is to recreate formatted output handling using variadic arguments. It covers key low-level concepts such as parsing format strings, handling different data types, and converting values (e.g., decimal to hexadecimal).

This project is part of the 42 curriculum.

---

## Instructions

### Compilation

To compile the project, run:

```bash
make
```

This will generate the static library:

```bash
libftprintf.a
```

---

### Usage

Include the header file in your code:

```c
#include "ft_printf.h"
```

Compile your program with:

```bash
gcc main.c libftprintf.a
```

---

### Supported Conversions

* `%c` → character
* `%s` → string
* `%p` → pointer address
* `%d` / `%i` → integer (base 10)
* `%u` → unsigned integer
* `%x` → hexadecimal (lowercase)
* `%X` → hexadecimal (uppercase)
* `%%` → percent sign

---

## Resources

* C Standard Library documentation (`printf`)
* `stdarg.h` — variadic functions
* Base conversion concepts (decimal ↔ hexadecimal)
* Memory and string handling in C
* AI tools were used as guidance to help understand concepts.

