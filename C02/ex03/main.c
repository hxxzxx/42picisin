/* ************************************************************************** */
/**/
/*:::      ::::::::   */
/*   main.c:+:      :+:    :+:   */
/*+:+ +:++:+     */
/*   By: heejlee <marvin@42.fr>+#+  +:++#+*/
/*+#+#+#+#+#+   +#+*/
/*   Created: 2021/10/17 15:32:33 by heejlee#+#    #+#*/
/*   Updated: 2021/10/17 15:45:34 by heejlee###   ########.fr*/
/**/
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(void)
{
char string[10] = "0123";

char *pointer;
pointer = string;

printf("%d",ft_str_is_numeric(pointer));

return(0);
}
