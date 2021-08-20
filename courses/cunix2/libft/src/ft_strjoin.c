#include "../libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);
    int new_len = len1 + len2;
    char *new_str = (char *) malloc((new_len + 1) * sizeof(char));
    if (new_str == NULL)
    {
        return NULL;
    }
    int i = 0;

    for (; s1[i] != 0; i++)
    {
        new_str[i] = s1[i];
    }

    for (int j = 0; s2[j] != 0; j++, i++)
    {
        new_str[i] = s2[j];
    }
    new_str[i] = '\0';
    return new_str;
}

