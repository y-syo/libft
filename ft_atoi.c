int	ft_atoi(const char *str)
{
	int	r;
	int	i;
	int	s;

	r = 0;
	i = 0;
	s = 1;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' || str[i] <= '9')
			r = (r * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (r * s);
}
