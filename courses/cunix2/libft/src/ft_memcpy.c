#include "../libft.h" 
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *p_dest = (char *) dest;
    const char *p_src = (const char *) src;
    if ((p_dest != NULL) && (p_src != 0))
    {
        while (n--)
        {
            *(p_dest++) = *(p_src++);
        }
    }
    return dest;
}
