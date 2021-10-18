/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <heejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:39:23 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/18 19:34:58 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa(unsigned char	c)
{
	char	*h;

	h = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(h[c / 16]);
	ft_putchar(h[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
