12 int ft_is_prime(int nb)
 13 {
 14     int i;
 15 
 16     i = 2;
 17     if (nb <= 1)
 18         return (0);
 19     else if (nb == 2)
 20         return (1);
 21     while (i < nb / 2)
 22     {
 23         if (i % nb == 0)
 24     return (0);
 25         i++;
 26     }
 27     return (1);
 28 }
