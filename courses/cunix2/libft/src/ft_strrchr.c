#include "../libft.h"

char *ft_strrchr(const char *str, int c)
{
    char *addr = NULL;
    if ((char) c == '\0')
    {
        return (char *) str + ft_strlen(str);
    }
    while (*str != '\0')
    {
        if (*str == (char) c)
        {
            addr = (char *) str;
        }
        str++;
    }
    return addr;
}

