#include "../libft.h"
char *ft_strdup(const char *str)
{   
    int len = ft_strlen(str);
    char *new_str = (char *)malloc((len + 1) * sizeof(char));
    for (int i = 0; i < len; i++)
    {
        new_str[i] = str[i];
    }
    new_str[len] = '\0';
    return new_str;
}
