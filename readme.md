# Reimplementing C standard library functions

```
r_strcpy is short for reimplemented_strcpy
```

### Currently Implemented

| Function   | Description                                                                               |
| ---------- | ----------------------------------------------------------------------------------------- |
| strlen()   | Returns the number of characters in the string, excluding the null terminator \0.         |
| strcpy()   | Copies contents of src string to dest.                                                    |
| strcat()   | Appends src string to the end of dest.                                                    |
| strncat()  | Appends up to n characters from src to dest.                                              |
| strcmp()   | Compares two strings and returns 0 if equal.                                              |
| strcspn()  | Finds a character from a array of string                                                  |
| strerror() | Returns the string description of an error code.                                          |
| memchr()   | Returns a pointer to the first byte in a block of memory which contains a specified value |
| strrev()   | Returns the reverse of the string (unofficial)                                            |
