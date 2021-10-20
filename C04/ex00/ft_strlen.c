#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(void)
{
char string[10] = "0123";

char *pointer;
pointer = string;

printf("%d",ft_str_is_numeric(pointer));

return(0);
}
