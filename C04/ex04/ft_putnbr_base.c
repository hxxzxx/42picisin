/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <heejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:39:49 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/23 12:47:10 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nbase(int nbr, int i, char *base)
{
	char	a[100];
	int		j;

	j = 0;
	while (nbr != 0)
	{
		a[j] = base[nbr % i];
		nbr = nbr / i;
		j++;
	}
	while (j--)
	{
		ft_putchar(a[j]);
	}
}

int	expbase(int i, char *base)
{
	int	j;

	j = 0;
	if (i == 1 || i == 0
		|| base[j] == base[j + 1]
		|| base[j] == '+' || base[j] == '-')
	{
		j++;
		return (0);
	}
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	a;

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
