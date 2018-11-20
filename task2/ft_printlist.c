#include <stdio.h>
int     ft_strcmp(char *s1, char *s2);
int     ft_strlen(char *str);
int		ft_findmaxlen(char **list, int size);

void    ft_printlist(char **list, int size)
{
	int		i;
	int		maxlen;
	int		len;

	i = 0;
	maxlen = ft_findmaxlen(list, size);
	if (ft_strcmp(list[size], list[size - 1]) == 0)
		size--;
	while (i <= size)
	{
		len = ft_strlen(list[i]);
		while(len <= maxlen)
		{
			printf("_");
			len++;
		}
		printf("%s ", list[i]);
		printf("\n");
		i++;
	}
}