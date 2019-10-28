# \_printf :pencil2:
## A printf clone function that prints formatted strings to the screen. 

### **Usage**
```c
 int _printf(const char *format, ...);
```
Give examples



#### Conversion Specifiers
Specifier | Description
-------|----------------------
- [x] c |
- [x] s |
- [x] % |
- [x] d |
- [x] i |
- [ ] u |
- [ ] o |
- [ ] x |
- [ ] X |
- [ ] S | prints the string while non printable characters are printed `\x` followed by ASCII upper case hex value
- [ ] p |
- [ ] b | unsigned int argument is converted to binary
- [x] r | prints the reversed string
- [x] R | Encodes the string using rot13
#### Supported flags
Flags | Description
-------|----------------------
- [ ] \+ |
- [ ] space |
- [ ] \# | 
- [ ] 0 |
- [ ] \- |
#### Supported width
Width | Description
-------|----------------------
#### Supported precision
Precision | Description
-------|----------------------
#### Length modifiers
Length | d i | u o x X
-------|----------|----------------------
- [ ] l |long int | unsigned long int
- [ ] h |short int | unsigned short int

#### Return value
If successful, \_printf will return the number of characters printed, excluding the null byte, else if \_printf encounters an error, the return value will be negative.

#### Authors
[Justin Majetich](https://github.com/justinmajetich) & [Kati Fredlund](https://github.com/kfredlund)

