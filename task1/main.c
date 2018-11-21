#include "ft.h"

int     main(int argc, char **argv)
{
	int			count;
	ListNode	*res;
	ListNode	*temp;
	ListNode	*start;
	int			t;
	int			i;


	if (argc < 2)
		return (0);

	i = 3;
	count = ft_atoi(argv[1]);
	res = ft_insert(ft_atoi(argv[2]));
	count = count + 1;
	while (i <= count)
	{
		res->next = ft_insert(ft_atoi(argv[i]));
		res = res->next;
		i++;
	}
	start = start->next;
	while (start)
    {
        printf("%d\n", start->value);
        start = start->next;
    }
	return (0);
}