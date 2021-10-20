#include <stdio.h>
int ft_strlen(char *str);
int main(void)
{
char string[10] = "0123";

char *pointer;
pointer = string;

printf("%d",ft_strlen(pointer));

return(0);
}
