/* ************************************************************************** */
/**/
/*:::      ::::::::   */
/*   ft_str_is_lowercase.c:+:      :+:    :+:   */
/*+:+ +:++:+     */
/*   By: heejlee <marvin@42.fr>+#+  +:++#+*/
/*+#+#+#+#+#+   +#+*/
/*   Created: 2021/10/17 15:47:41 by heejlee#+#    #+#*/
/*   Updated: 2021/10/17 15:53:03 by heejlee###   ########.fr*/
/**/
/* ************************************************************************** */

int     ft_str_is_lowercase(char *str)
{
    int i;

i = 0;
    while(str[i] != '\0')
    {
if(str[i] < 97 || str[i] >122)
{
return(0);
}
i++;
    }
    return(1);
}