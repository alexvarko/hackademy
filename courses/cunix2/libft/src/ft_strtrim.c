#include "../libft.h"

char *ft_strtrim(char const *s)
{
    int i;
    int s_len;
    char *new_str;
    if (s == NULL)
    {
        return (NULL);
    }
    s_len = ft_strlen(s);

    while (s[s_len - 1] == ' ' || s[s_len - 1] == '\t' || s[s_len - 1] == '\n')
    {
        s_len--;
    }

    i = -1;
    while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
    {
        s_len--;
    }
    if (s_len <= 0)
    {
        s_len = 0;
    }

    new_str = (char *)malloc((s_len + 1) * sizeof(char));
    if (new_str == NULL)
    {
        return (NULL);
    }

    s = s + i;
    i = -1;
    while (++i < s_len)
    {
        new_str[i] = *s++;
    }

    new_str[i] = '\0';
    return (new_str);
}


