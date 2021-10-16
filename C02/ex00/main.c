/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heejlee <heejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:17:17 by heejlee           #+#    #+#             */
/*   Updated: 2021/10/16 16:38:01 by heejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcpy(char *dest,char *src);

int		main(void)
{
	char src[] = "HI Im HEEJU";
	char dest[]= "I can do it";
	char *po;

	po= ft_strcpy(dest,src);
	printf("%s",po);

}
