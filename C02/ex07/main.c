#include <stdio.h>
char *ft_strupcase(char *str);
int main(void)
{
    char string[10] = "ABC";
    char *pointer;

    pointer = ft_strupcase(string);


printf("%s",pointer);
    return(0);
}
