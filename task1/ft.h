#ifndef FT_H
# define FT_H
# include <stdio.h>
# include <stdlib.h>

int		        ft_atoi(char *str);

typedef struct      s_ListNode {
    struct          s_ListNode *next;
    int             value;
}                   ListNode;

ListNode        *ft_insert(int newValue);

#endif