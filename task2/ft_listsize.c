#include <stdlib.h>
int		ft_strcmp(char *s1, char *s2);

int     ft_listsize(char **list)
{
    int i;

    i = 0;
    while(list[i + 1] != NULL && ft_strcmp(list[i], list[i + 1]) != 0 )
        i++;
    return (i + 1);
}