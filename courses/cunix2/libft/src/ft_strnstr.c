#include "../libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    if (*s2 == '\0'){
        return (char *) s1;
    }
    for (size_t i = 0; s1[i] != 0 && i < n; i++)
    {
        for (size_t j = 0; s2[j] != 0 && i + j < n; j++)
        {
            if (s1[i + j] != s2[j])
            {
                break;
            }
            if (s2[j + 1] == 0)
            {
                return (char *) &s1[i];
            }
        }
    }
    return NULL;
}
