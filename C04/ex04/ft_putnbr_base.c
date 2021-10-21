#include <unistd.h>
voidft_putchar(char c)
{
write(1,&c,1);
}
voidnbase(int nbr, int i, char *base)
{
char *a;
int j;

j = 0;
a = NULL;
while (nbr != 0)
{
nbr = nbr / i;
a[j] = base[nbr % i];
j++;
}
while (j >= 0)
{
ft_putchar(a[j]);
j--;
}
}

intexpbase(int i, char *base)
{
if (i == 1 || i == 0
|| base[i] == base[i+1] 
|| base[i] == '+' || base[i] == '-')
return (0);
return (1);
}
voidft_putnbr_base(int nbr, char *base)
{
inti;
inta;

i = 0;
if (nbr < 0)
{
nbr = nbr * (-1);
ft_putchar('-');
}
while (base[i] != '\0')
i++;
a = expbase(i, base);
if (a == 1)
nbase(nbr, i, base);
}
