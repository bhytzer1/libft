#include <stdio.h>
#include "libft.h"

int main(void)
{
    char ch = 'G';
    if (ft_isalpha(ch))
        printf("%c è una lettera\n", ch);
    else
        printf("%c NON è una lettera\n", ch);
    return 0;
}
