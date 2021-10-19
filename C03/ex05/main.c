#include <stdio.h>

unsigned int ft_strlcat(char *dest,char *src, unsigned int size);

int     main(void)

{   char src[] = "HI Im HEEJU";
    char dest[60]="I can do it";

printf("%d",ft_strlcat(dest,src,5));

return(0);
}
