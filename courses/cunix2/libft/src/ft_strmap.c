#include "../libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    int len = ft_strlen(s);
    char *new_str = (char *) malloc((len + 1) * sizeof(char));
    if ((s == NULL) || (f == NULL))
    {
        return NULL;
    }
    int i;
    for (i = 0; i < len; i++)
    {
        new_str[i] = f(s[i]);
    }
    new_str[i] = '\0';
    return new_str;
}
