#include "../libft.h"
div_t ft_div(int numerator, int denominator)
{
    int quot = numerator / denominator;
    int rem = numerator % denominator;
    div_t out = {quot, rem};
    return out;
}
