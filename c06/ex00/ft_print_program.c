#include <unistd.h>
voidft_putchar(char c)
{
write(1, &c, 1);
}

intmain(int argc, char *argv[])
{
inti;

i = 0;
if (argc > 0)
{
while (argv[0][i] != '\0')
{
ft_putchar(argv[0][i]);
i++;
}
ft_putchar('\n');
}
return (0);
}
