#include <stdlib.h>

int		its_skip_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		words_num(char *str)
{
	int		i;
	int		words_num;

	i = 0;
	words_num = 0;
	while (str[i])
	{
		if (!its_skip_space(str[i]))
			if (its_skip_space(str[i + 1]) || (str[i + 1] == '\0'))
				words_num++;
		i++;
	}
	return (words_num);
}

char	**ft_strlist(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**words;
	char	*str_buf;

	if (!str || !(words = (char **)malloc(sizeof(char *) * (words_num(str) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	str_buf = str;
	while (j < words_num(str))
	{
		while (its_skip_space(str_buf[k]))
			k++;
		words[j] = (char *)malloc(sizeof(char *));
		while (!its_skip_space(str_buf[k]) || !str_buf[k])
			words[j][i++] = str_buf[k++];
		words[j][i] = '\0';
		j++;
		i = 0;
	}
	words[j] = NULL;
	return (words);
}