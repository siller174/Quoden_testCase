#include <stdio.h>
#include <stdlib.h>

int		ft_count_repeat(char *str, char *str2);
int		words_num(char *str);
int     ft_listsize(char **list);
char	**ft_strlist(char *str);
char	**ft_remove_repeat(char **list, int size);
char	**ft_sortlistspecial(char *str, char **list, int size);

int		main(int argc, char **argv)
{
	int size;
    char   **str;

	char	*temp = "aa c c hello c a a a a a a a  aaaasdas vvva aa vvva aa ssssss c c c c c c c c c c c c  eee eee c c c word hello c c c c c c c lol kek lol lol lol lol";
    
	size = words_num(temp);
	str = ft_strlist(temp);
	str = ft_sortlistspecial(temp ,str, size);
	str = ft_remove_repeat(str, size);
	//size = ft_listsize(str);
    // // res = ft_sortlist(res, 3);
    // // for(int i = 0; i < 5; i++)
    // //     printf("%s", res[i]);
    // free(str);
    // return (0);    
	// for(int i = 0; i < size; i++)
	// {
	// 	printf("%s ", str[i]);
	// 	printf("\n");
	// }
}