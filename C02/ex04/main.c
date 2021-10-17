#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(void)
{
    char string[10] = "";
    char *pointer;

pointer = string;
    printf("%d",ft_str_is_lowercase(pointer));
    return(0);
}
