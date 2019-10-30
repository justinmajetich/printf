# \_printf :pencil2:
## A printf clone function that prints formatted strings to the screen. 

### **Usage**
```c
 int _printf(const char *format, ...);
```

### Files

##### Parent Function

File | Description
-------|----------------------
\_printf.c | Prints a formatted string to screen

##### Manager Functions

File | Description
-------|----------------------
fmt_mngr.c | Directs/retrieves data to/from formatting and conversion functions
li_fp_mngr.c | Selects appropriate long integer accepting function
lu_fp_mngr.c | Selects appropriate unsigned long integer accepting function
ptr_fp_mngr.c | Selects appropriate pointer accepting function
cpy_fmt_spec.c | Validates format specifier and copies to a new string
\_print_string.c | Prints a string
arg_type_identifier.c | Identifies type based on format specifier
##### Conversion Functions

File | Description
-------|----------------------
r_reverse_cnvrt.c | Reverses a string input
R_rot13_cnvrt.c | Encodes in rot 13 and returns a string
s_string_cnvrt.c | Prints a string
S_nonprint_cnvrt.c | 
p_pointer_cnvrt.c | Pointer address
c_char_cnvrt.c | Converts a character to a string
d_decimal_cnvrt.c | Converts a decimal to a string
i_int_cnvrt.c | Converts an integer to a string
u_unsigned_cnvrt.c | Converts an unsigned integer to a string

##### Helper Functions

File | Description
-------|----------------------
helper_functions.c | File containing the following helper functions:
- [x] \_strnlen - A function that finds the length of a string
- [x] \_atoi - A function that converts a char to an in
- [x] \_itoa - A function that converts a number to a string
- [x] \_strncpy - A function that copies n bytes of src to dest string
- [x] \_revstr - A function that reverses a string

##### Accessory Files

File | Description
-------|----------------------
holberton.h | header file
man_page.1 | \_printf manual page
README.md | Project description

## Specifier Usage

#### Conversion Specifiers
Format specifiers are implemented as follows: `%[flags][width][.precision][length]type`.

Type | Description
-------|----------------------
c | Single character
s | String of characters
% | `%%` will write `%`
d | Single decimal integer
i | Single decimal integer
u | Unsigned decimal integer
o | Unsigned octal
x | Unsigned hexadecimal integer (lowercase)
X | Unsigned hexadecimal integer (uppercase)
S | prints the string while non printable characters are printed `\x` followed by ASCII upper case hex value
p | Pointer address
b | unsigned int argument is converted to binary
r | prints the reversed string
R | Encodes the string using rot13

\- | Left-justifies value
#### Supported width
Width | Description
-------|----------------------
(a number) | Number of characters to be printed (minimum). Blank spaces preclude the value if it's smaller than this width number

#### Length modifiers
Length | d i | u o x X
-------|----------|----------------------
l |long int | unsigned long int
h |short int | unsigned short int

#### Return value
If successful, \_printf will return the number of characters printed, excluding the null byte, else if \_printf encounters an error, the return value will be negative.

#### Authors
[Justin Majetich](https://github.com/justinmajetich) & [Kati Fredlund](https://github.com/kfredlund)

