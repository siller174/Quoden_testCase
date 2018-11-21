#include "ft.h"

int     main(int argc, char **argv)
{
	int			count;
	ListNode	*res;
	ListNode	*start;
	int			*x;
	int			t;
	int			i;

	i = 0;
	scanf("%d", &count);
	
	x = (int*)malloc(sizeof(int*) * (count + 1));

	while (i < count)
	{
		scanf("%d", &x[i]);
		i++;
	}

	i = 1;
	res = ft_insert(x[0]);
	start = res;

	while (i < count)
	{
		res->next = ft_insert(x[i]);
		res = res->next;
		i++;
	}
	
    ft_printtable(start, count);
	return (0);
}