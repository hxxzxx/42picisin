#include <stdio.h>
char    *ft_strstr(char *str, char *to_find);
int main(void)
{
    char src[] = "01234567894589456";
    char find[] = "458";
    char *po;

po = ft_strstr(src, find);
    printf("%s\n", po);
    return (0);
}
