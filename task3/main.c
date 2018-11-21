#include <stdio.h>

int		ft_strlen(char *str);

int		main()
{
	int		i;
	int 	neg;
	int 	temp;
	int 	pos;
	int		count_o;
	int		count_v;
	int 	stack[10000];
	char 	line[10000];

	scanf("%[^\n]", line);

	i = 0;
	pos = 1;
	count_o = 0;
	count_v = 0;
	while (i < ft_strlen(line))
	{
		neg = 1;
		temp = 0;
		if ((line[i] == '+' || line[i] == '*' || line[i] == '/') && pos >= 1)
		{
			if (line[i] == '+')
				stack[pos - 2] = stack[pos - 1] + stack[pos - 2];

			if (line[i] == '*')
				stack[pos - 2] = stack[pos - 1] * stack[pos - 2];

			if (line[i] == '/')
				stack[pos - 2] = stack[pos - 2] / stack[pos - 1];

			pos--;
			i++;
			count_o++;
		}

		if (line[i] == '-')
		{
			if (line[i + 1] >= '0' && line[i + 1] <= '9')
				neg = -1;
			else
			{
				stack[pos - 2] = stack[pos - 2] - stack[pos - 1];
				pos--;
				count_o++;
			}
			i++;
		}

		if (line[i] >= '0' && line[i] <= '9')
		{
			while (line[i] >= '0' && line[i] <= '9')
			{
				temp = (temp * 10) + (line[i] - '0');
				i++;
			}
			stack[pos] = neg * temp;
			pos++;
			count_v++;
		}
		if (line[i] == ' ')
			i++;
	}
	if (count_o >= 1 && count_v >= 2)
		printf("%d", stack[1]);

	return (0);
}