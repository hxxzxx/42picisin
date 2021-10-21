/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:42:18 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/21 22:05:24 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int  ft_recursive_factorial(int nb)
{
    if (nb < 1)
return (0);
    else if (nb == 1)
return 1;
    return (nb * ft_recursive_factorial(nb - 1));
}
