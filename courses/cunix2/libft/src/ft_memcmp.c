#include "../libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p_s1 = s1;
    const unsigned char *p_s2 = s2;
    if (s1 == s2)
    {
        return 0;
    }
    while (n--)
    {
        if (*p_s1 != *p_s2)
        {
            return (*p_s1 > *p_s2) ? 1 : -1;
        }
        p_s1++;
        p_s2++;
    }
    return 0;
}

