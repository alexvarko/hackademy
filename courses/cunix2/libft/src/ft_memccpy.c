#include "../libft.h" 
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *p_dest = (char *) dest;
    const char *p_src = (const char *) src;
    while (n--)
    {
        *p_dest = *p_src;
        if (*p_dest == (char) c)
        {
            return p_dest + 1;
        }
        p_dest++;
        p_src++;
    }

    return 0;
}
