/* ************************************************************************** */
/**/
/*:::      ::::::::   */
/*   ft_str_is_numeric.c:+:      :+:    :+:   */
/*+:+ +:++:+     */
/*   By: heejlee <marvin@42.fr>+#+  +:++#+*/
/*+#+#+#+#+#+   +#+*/
/*   Created: 2021/10/17 15:24:34 by heejlee#+#    #+#*/
/*   Updated: 2021/10/17 15:41:40 by heejlee###   ########.fr*/
/**/
/* ************************************************************************** */
int ft_str_is_numeric(char *str)
{
    int i;

i = 0;
    while(str[i] != '\0')
    {
if(str[i] < 48 ||str[i] > 58)
{
return(0);
}
i++;
    }
    return(1);
}