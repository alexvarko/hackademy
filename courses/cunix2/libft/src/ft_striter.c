#include "../libft.h"

void ft_striter(char *s, void (*f)(char *))
{
    for (int i = 0; i < ft_strlen(s); i++)
    {
        f(&s[i]);
    }
}
