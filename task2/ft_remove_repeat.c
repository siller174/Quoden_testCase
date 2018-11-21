int     ft_strcmp(char *s1, char *s2);
void    ft_printlist(char **list, int size, char *str);

char	**ft_remove_repeat(char **list, int size, char *str)
{
	int		i;
	int		j;
	int		k;
	char	**temp;

	i = 0;
	k = 0;
	temp = list;
	size = size - 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(list[i], list[j]) == 0)
			{
				k = j;
				while (k < size)
				{
					list[k] = list[k + 1];
					k++;
				}
				j--;
				size--;
			}
			j++;
		}
		i++;
	}
	ft_printlist(temp, size, str);
	return (temp);
}