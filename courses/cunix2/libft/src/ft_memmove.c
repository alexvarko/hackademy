#include "../libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *p_dest = (char *) dest;
    const char *p_src = (const char *) src;
    char *tmp = (char *) malloc(sizeof(char) * n);
    
    for (size_t i = 0; i < n; i++)
    {
        tmp[i] = p_src[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        p_dest[i] = tmp[i];
    }
    free(tmp);
    return dest;
}
