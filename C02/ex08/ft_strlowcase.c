/* ************************************************************************** */
/**/
/*:::      ::::::::   */
/*   ft_strlowcase.c:+:      :+:    :+:   */
/*+:+ +:++:+     */
/*   By: heejlee <marvin@42.fr>+#+  +:++#+*/
/*+#+#+#+#+#+   +#+*/
/*   Created: 2021/10/17 16:42:36 by heejlee#+#    #+#*/
/*   Updated: 2021/10/17 16:46:06 by heejlee###   ########.fr*/
/**/
/* ************************************************************************** */
char *ft_strlowcase(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i] >= 65 && str[i] <= 90)
{
str[i]= str[i] + 32;
}
i++;
}
return(str);
}
