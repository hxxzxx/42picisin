char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[0] >= 97 && str[0] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else if ((32 <= str[i] && str[i] <= 47) || (58 <= str[i] && str[i] <= 64) ||(91 <= str[i] && str[i] <= 96) || (123 <= str[i] && str[i] <= 126) )
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
			i++;
	}
	return (str);
}
