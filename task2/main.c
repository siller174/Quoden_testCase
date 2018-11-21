#include <stdio.h>
#include <stdlib.h>

int		ft_count_repeat(char *str, char *str2);
int		ft_strlen(char *str);
int		words_num(char *str);
char	**ft_strlist(char *str);
char	**ft_remove_repeat(char **list, int size, char *str);
char	**ft_sortlistspecial(char *str, char **list, int size);

int		main(int argc, char *argv[])
{
	int		size;
    char  	**str;
	char	line[4096];

	// gets(line);
	scanf("%[^\n]",line);
	size = words_num(line);
	if (size == 0)
		return (0);
	if (size == 1)
	{
		printf("%s ..........", line);
		return (0);
	}
		
	str = ft_strlist(line);
	str = ft_sortlistspecial(line ,str, size);
	str = ft_remove_repeat(str, size, line);
}