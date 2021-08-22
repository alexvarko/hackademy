#include "../libft.h"


char **ft_strsplit(char const *s, char c)
{
    unsigned long s_len = ft_strlen(s);
    unsigned long i = 0;
    int words = 0;
    long start = 0;

    while (i < s_len)
    {
        if (start && s[i] == c)
        {
            start = 0;
            words++;
        }
        else if (s[i] != c)
        {
            start = 1;
        }

        i++;
    }

    if (start)
    {
        words++;
    }

    char **new_str = (char **)malloc(sizeof(char *) * (words + 1));
    new_str[words] = NULL;

    i = 0;
    unsigned long str_len = 0;
    words = 0;
    start = -1;

    while (i < s_len)
    {
        if (start == -1)
        {
            if (s[i] != c)
            {
                start = i;
                str_len++;
            }
        }
        else
        {
            if (s[i] == c)
            {
                new_str[words] = (char *)malloc(sizeof(char) * (str_len + 1));
                new_str[words][str_len] = 0;
                ft_memcpy(new_str[words], &s[start], str_len);
                start = -1;
                str_len = 0;
                words++;
            }
            else
            {
                str_len++;
            }
        }

        i++;
    }

    if (start != -1)
    {
        new_str[words] = (char *)malloc(sizeof(char) * (str_len + 1));
        new_str[words][str_len] = 0;
        ft_memcpy(new_str[words], &s[start], str_len);
    }

    return new_str;
}
