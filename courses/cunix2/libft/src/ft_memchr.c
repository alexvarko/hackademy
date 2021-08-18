#include"../libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    char *p_s = (char *) s;
    for (size_t i = 0; i < n; i++)
    {
        if(p_s[i] == (char) c)
        {
            return &p_s[i];
        }
    }
    return 0;
}
