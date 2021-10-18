#include <stdio.h>
unsigned int ft_strlcpy(char *dest,char *src,unsigned int size);

int		main(void)
{
	char src[] = "HI Im HEEJU";
	char dest[]= "I can do it";
	unsigned int n;

	n = ft_strlcpy(dest,src,5);

	printf("%U",n);
	printf("%s",dest);

}
