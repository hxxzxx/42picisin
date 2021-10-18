#include <stdio.h>
int ft_strncmp(char *s1, char *s2,unsigned int n);
int main(void)
{
	char s1[10] = "aaa";
    char s2[10] = "aab";

    printf("strcmp : %d\n",ft_strncmp(s1,s2,3)); //strcmp

    return 0;
}
