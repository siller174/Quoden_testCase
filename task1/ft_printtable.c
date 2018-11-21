#include "ft.h"

void       ft_printtable(ListNode *start, int count)
{
	int			i;
	int			x;
	int			countprint;
	ListNode	*temp;

	i = 0;
	countprint = 0;
	while(countprint < count)
	{
		printf("%d:", i);
		temp = start;
		while (temp)
		{
			x = temp->value % count;
			if(x == i)
			{
				printf(" %d", temp->value);
				countprint++;
			}
			temp = temp->next;
		}
		printf("\n");
		i++;
	}
}