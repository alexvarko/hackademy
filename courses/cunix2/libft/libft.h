#include <stdlib.h>

void ft_bzero(void *s,size_t n);
char *ft_strdup(const char *str);
int ft_strlen(const char *str);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_isalpha(int i);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_abs(int c);
div_t ft_div(int numerator, int denominator);
char *ft_strstr(const char *str1, const char *str2);
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
