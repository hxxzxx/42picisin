/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:32:42 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/26 13:40:50 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
intmain(int argc, char *argv[])
{
inti;

i = 1;
if (argc > 0)
{
while (argv[i])
{
ft_putstr(argv[i]);
write(1, "\n", 1);
i++ ;
}
}
return (0);
}
