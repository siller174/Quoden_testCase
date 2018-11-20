int		ft_count_repeat(char *str, char *str2);

char	**ft_sortlistspecial(char *str,char **list, int size)
{
	int		i;
	int		j;
	char	*temp;
	char	**result;

	result = list;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
            if (ft_count_repeat(str ,list[i]) > ft_count_repeat(str, list[j]))
			{
				temp = result[i];
				result[i] = result[j];
				result[j] = temp;
			}
			j++;
		}
		i++;
	}
	return list;
}