#include <stdio.h>
char    *ft_strncat(char *dest,char *src, unsigned int nb);
int     main(void)
{   char src[] = "HI Im HEEJU";
    char dest[60]="I can do it";
    char *po;

po= ft_strncat(dest,src,5);
    printf("%s",po);
}
