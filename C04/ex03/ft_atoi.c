/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <heejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:31:59 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/20 12:37:52 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	mi;
	int	res;

	res = 0;
	i = 0;
	mi = 1;
	while (str[i] == '-' || str[i] == '+' || str[i] == 32)
	{
		if (str[i] == '-')
			mi = mi * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + res * 10;
		i++;
	}
	return (res * mi);
}
 h
