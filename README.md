# \_printf :pencil2:
## A printf clone function that prints formatted strings to standard output 

### **Usage**
```c
 int _printf(const char *format, ...);
```

### Files

##### Parent Function

File | Description
-------|----------------------
\_printf.c | Prints formatted string to standard output

##### Manager Functions

File | Description
-------|----------------------
fmt_mngr.c | Retrieves the appropriate function pointer and passes an argument; returns converted string
li_fp_mngr.c | Selects appropriate long integer conversion function
lu_fp_mngr.c | Selects appropriate unsigned long integer conversion function
ptr_fp_mngr.c | Selects appropriate pointer conversion function
cpy_fmt_spec.c | Validates format specifier and copies isolated specifier a new string
\_print_string.c | Prints formatted text from buffer
arg_type_identifier.c | Identifies data type according to format specifier
##### Conversion Functions

File | Description
-------|----------------------
r_reverse_cnvrt.c | Reverses a string
R_rot13_cnvrt.c | Encodes a string in rot13
s_string_cnvrt.c | Copies string argument to new buffer
c_char_cnvrt.c | Converts a character to a string
d_decimal_cnvrt.c | Converts a decimal to a string
i_int_cnvrt.c | Converts an integer to a string
u_unsigned_cnvrt.c | Converts an unsigned integer to a string

##### Helper Functions

File | Description
-------|----------------------
helper_functions.c | File containing the following helper functions:
- [x] \_strlen - A function that finds the length of a string
- [x] \_itoa - A function that converts a number to a string
- [x] \_strncpy - A function that copies n bytes of src to dest string
- [x] \_revstr - A function that reverses a string

##### Accessory Files

File | Description
-------|----------------------
holberton.h | header file
man_3_printf | \_printf manual page
README.md | project description

## Specifier Usage

#### Conversion Specifiers
Format specifiers are implemented as follows: `%[flags][width][.precision][length]type`.

Type | Description
-------|----------------------
% | Signifies format specifier
s | Convert character pointer (string)
c | Convert character
d | Convert decimal
i | Convert integer
u | Convert unsigned integer
r | Reverse string
R | Encodes string into rot13

#### Length modifiers
Length | d i | u o x X
-------|----------|----------------------
l |long int | unsigned long int
h |short int | unsigned short int

#### Return value
If successful, \_printf will return the number of characters printed, excluding the null byte, else if \_printf encounters an error, the return value will be -1.

#### Authors
[Justin Majetich](https://github.com/justinmajetich) & [Kati Fredlund](https://github.com/kfredlund)
