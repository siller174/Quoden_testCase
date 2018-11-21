#ifndef FT_H
# define FT_H
# include <stdio.h>
# include <stdlib.h>

typedef struct      s_ListNode {
    struct          s_ListNode *next;
    int             value;
}                   ListNode;

ListNode        *ft_insert(int newValue);
void            ft_printtable(ListNode *start, int count);

#endif