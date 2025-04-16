# Reimplementing C standard library functions

```
r_strcpy is short for reimplemented_strcpy
```

### Currently Implemented

| Sr.no | Function   | Description                                                                               |
| ----- | ---------- | ----------------------------------------------------------------------------------------- |
| 1     | strlen()   | Returns the number of characters in the string, excluding the null terminator \0.         |
| 2     | strcpy()   | Copies contents of src string to dest.                                                    |
| 3     | strcat()   | Appends src string to the end of dest.                                                    |
| 4     | strncat()  | Appends up to n characters from src to dest.                                              |
| 5     | strcmp()   | Compares two strings and returns 0 if equal.                                              |
| 6     | strcspn()  | Finds a character from a array of string                                                  |
| 7     | strerror() | Returns the string description of an error code.                                          |
| 8     | memchr()   | Returns a pointer to the first byte in a block of memory which contains a specified value |
| 9     | strrev()   | Returns the reverse of the string (unofficial)                                            |
