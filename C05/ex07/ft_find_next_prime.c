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
 23         if (nb % i == 0)
 24     return (0);
 25         i++;
 26     }
 27     return (1);
 28 }
 29 
 30 int ft_find_next_prime(int nb)
 31 {   
 32     if (nb <= 1)
 33         return (2);
 34     while (ft_is_prime(nb) != 1)
 35         nb++;
 36     return (nb);
 37 }
