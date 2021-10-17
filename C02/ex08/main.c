#include <stdio.h>
char *ft_strlowcase(char *str);

int main(void)
{
    char string[10] = "ABC";
    char *pointer;
    
    pointer = ft_strlowcase(string);
    printf("%s",pointer);
return(0);
}
