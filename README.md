# \_printf :pencil2:
## A printf clone function that prints formatted strings to the screen. 

### **Usage**
```c
 int _printf(const char *format, ...);
```
### Examples



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
#### Supported flags
Flags | Description
-------|----------------------
\+ | Result is precluded with a plus or minus sign dependant on it's positive or negative value, respectively
space | Blank space precludes value
\# | 0 precludes values other than 0
0 | 0-fills the width from the left to right, in place of spaces
\- | Left-justifies value
#### Supported width
Width | Description
-------|----------------------
(a number) | Number of characters to be printed (minimum). Blank spaces preclude the value if it's smaller than this width number

#### Supported precision
Precision | d i u o x X | s
-------|----------|----------------------
.number | Result is precluded with 0's for each digit over the value to be written | The maximum number of characters to be printed
#### Length modifiers
Length | d i | u o x X
-------|----------|----------------------
l |long int | unsigned long int
h |short int | unsigned short int

#### Return value
If successful, \_printf will return the number of characters printed, excluding the null byte, else if \_printf encounters an error, the return value will be negative.

#### Authors
[Justin Majetich](https://github.com/justinmajetich) & [Kati Fredlund](https://github.com/kfredlund)

