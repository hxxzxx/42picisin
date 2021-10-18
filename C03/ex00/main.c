#include <stdio.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
	char s1[10] = "bb";
    char s2[10] = "aaa";

    printf("strcmp : %d\n",ft_strcmp(s1,s2)); //strcmp

    return 0;
}
