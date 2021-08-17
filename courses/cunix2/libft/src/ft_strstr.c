#include "../libft.h"
char *ft_strstr(const char *str1, const char *str2)
{
    if (*str2 == '\0')
    {
        return (char *) str1;
    }
    for (int i = 0; str1[i] != 0; i++)
    {
        for (int j = 0; str2[j] != 0; j++)
        {
            if (str1[i + j] != str2[j])
            {
                break;
            }
            if (str2[j + 1] == 0)
            {
                return (char *) &str1[i];
            }
        }
    }
    return NULL;
}
