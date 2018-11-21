#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);
int     ft_strlen(char *str);
int		ft_findmaxlen(char **list, int size);
int		ft_count_repeat(char *str, char *str2);

void    ft_printlist(char **list, int size, char *str)
{
	int		i;
	int		k;
	int		maxlen;
	int		len;
	int		maxrepeat;
	int		countpoint;

	i = 0;
	maxlen = ft_findmaxlen(list, size);
	if (ft_strcmp(list[size], list[size - 1]) == 0)
		size--;
	maxrepeat = ft_count_repeat(str, list[size]);
	while (i <= size)
	{
		k = 0;
		len = ft_strlen(list[i]);
		//printf("%f", (float)ft_count_repeat(str, list[i]) / (float)maxrepeat + 0.05);
		countpoint = ((float)ft_count_repeat(str, list[i]) / maxrepeat + 0.05) * 10;
		//printf("%d\n", countpoint);
		while(len < maxlen)
		{
			printf("_");
			len++;
		}
		printf("%s ", list[i]);
		while (k < countpoint)
		{
			printf(".");
			k++;
		}
		printf("\n");
		i++;
	}
}