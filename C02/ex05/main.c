#include <stdio.h>
int ft_str_is_uppercase(char *str);
int main(void)
{
    char string[10] = "";
    char *pointer;

pointer = string;
    printf("%d",ft_str_is_uppercase(pointer));
    return(0);
}
