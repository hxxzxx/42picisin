/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <heejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:54:08 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/20 10:55:47 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	num(int nb)
{
	char	num[12];
	int		i;

	i = 0;
	while (nb != 0)
	{
		num[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i--)
	{
		write(1, &num[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		num(147483648);
	}
	else if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		num(nb);
	}
	else if (nb > 0)
		num(nb);
	else
		write(1, "0", 1);
}
