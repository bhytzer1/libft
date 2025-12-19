📚 Libft
Mostra immagine
Mostra immagine
About
My implementation of libft - the first project at 42 School. A custom C library that re-codes standard libc functions and adds useful utilities.
Features

✅ Part 1: Standard C library functions (43 functions)
✅ Part 2: Additional utility functions (11 functions)
🔄 Bonus: Linked list functions (in progress)

Usage
bash# Compile the library
make

# Use in your project
gcc your_file.c libft.a -o your_program
c#include "libft.h"

int main(void)
{
    char **words = ft_split("Hello World", ' ');
    ft_putstr_fd(words[0], 1);  // Output: Hello
    return (0);
}
Testing
Test with popular testers:

Libft Unit Test
War Machine

Functions
Memory: memset, bzero, memcpy, memmove, memchr, memcmp, calloc
Strings: strlen, strlcpy, strlcat, strchr, strrchr, strncmp, strnstr, strdup, substr, strjoin, strtrim, split
Conversion: atoi, itoa, toupper, tolower
Output: putchar_fd, putstr_fd, putendl_fd, putnbr_fd
Apply: strmapi, striteri
Author
@bhytzer1
