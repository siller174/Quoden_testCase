#include "ft.h"

ListNode       *ft_insert(int newValue)
{
    ListNode *list;
    list = (ListNode*)malloc(sizeof(ListNode));

    if (!list)
        return (NULL);
    list->next = NULL;
    list->value = newValue;
    return (list);
}
