#include <stdio.h>
  
char    *ft_strcat(char *dest,char *src);
int     main(void)

{

char src[] = "HI Im HEEJU";
char dest[60]="I can do it";

char *po;



po= ft_strcat(dest,src);

printf("%s",po);



}
