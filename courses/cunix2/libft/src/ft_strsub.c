#include "../libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t n)
{
    if (s == NULL)
    {
        return NULL;
    }

    size_t s_len = ft_strlen(s);
    size_t mem_len = n;
    start = s_len > start ? start : s_len;
    if (n > s_len - start)
    {
        mem_len = s_len - start;
    }
    
    char *substr = (char *) malloc(mem_len + 1);
    for (size_t i = start; i < start + mem_len; i++)
    {
        substr[i - start] = s[i];
    }
    
    substr[mem_len] = '\0';

    return substr;
}

