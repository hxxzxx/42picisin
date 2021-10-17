/* ************************************************************************** */
/**/
/*:::      ::::::::   */
/*   main.c:+:      :+:    :+:   */
/*+:+ +:++:+     */
/*   By: heejlee <marvin@42.fr>+#+  +:++#+*/
/*+#+#+#+#+#+   +#+*/
/*   Created: 2021/10/17 14:14:32 by heejlee#+#    #+#*/
/*   Updated: 2021/10/17 15:16:14 by heejlee###   ########.fr*/
/**/
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    char string[10] = "ABC";
    char *pointer;

pointer = string;

printf("%d",ft_str_is_alpha(pointer));
    return(0);
}
