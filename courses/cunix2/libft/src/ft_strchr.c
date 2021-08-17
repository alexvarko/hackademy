#include "../libft.h"

char *ft_strchr(const char *str, int c)
{   
    char key = c; 
    while (*str != key)
    {
        if (*str == '\0')
        {
            return NULL;
        }
        str++;
    }
    return (char *) str;
}
