int ft_strlen(char *str);

int		ft_findmaxlen(char **list, int size)
{
	int i;
	int maxlen;

	maxlen = 0;
	i = 0;
	while (i < size)
	{
		if (maxlen < ft_strlen(list[i]))
			maxlen = ft_strlen(list[i]);
		i++;
	}
	return (maxlen);
}