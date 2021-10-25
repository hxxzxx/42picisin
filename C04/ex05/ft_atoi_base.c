int	ft_lens(char *base)
{
	int i;

	i = 0;
	while (base++)
		i++;
	return (i);
}

int	base_exp(int lens, char *base)
{
	int	i;

	i = 0;
	if (lens == 1 || lens == 0
		|| base[i] == base [i + 1]
		|| base[i] == '+' || base[i] == '-'
		|| base[i] == 32)
	{
		i++;
		return (0);
	}
	else
		return (1);
}

int atoi(char *str, char *base)
{
int	ft_lens(char *base)
{
	int i;

	i = 0;
	while (base++)
		i++;
	return (i);
}

int	base_exp(int lens, char *base)
{
	int	i;

	i = 0;
	if (lens == 1 || lens == 0
		|| base[i] == base [i + 1]
		|| base[i] == '+' || base[i] == '-'
		|| base[i] == 32)
	{
		i++;
		return (0);
	}
	else
		return (1);
}

int	ft_atoi_base(char *str, char *base)
{}
int	ft_atoi_base(char *str, char *base)
{
	int	j;
	int k;
	int lens;
	int a;
	int res;

	j = 0;
	res = 0;
	lens = ft_lens(base);
	a = base_exp(lens,base);
	if (a == 1)
	{
		while (str[j] != '\0')
		{
			k = 0;
			while (base[k] != '\0')
			{
				if (str[j] == base[k])
					 res = k + res * 10;
				k++;
			}
			j++;
		}
	}
	return (res);
}
