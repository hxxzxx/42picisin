#include <unistd.h>
voidft_putstr(char *str)
{
inti;

i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
}

intft_strcmp(char *s1, char *s2)
{
inti;

i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}

voidswap(char **a, char **b)
{
char *temp;

temp = *a;
*a = *b;
*b = temp;
}
int main(int argc, char *argv[])
{
    int n;
    int i;

n = 1;
    while (n++ != argc - 1)
    {
i = 1;
while (i != argc - 1)
{
if (ft_strcmp(argv[i],argv[i + 1]) > 0)
{
swap(&argv[i],&argv[i + 1]);
}
i++ ;
}
    }
    i = 1;
    while (argv[i])
    {
ft_putstr(argv[i]);
write(1,"\n",1);
i++ ;
    }
    return (0);
}
