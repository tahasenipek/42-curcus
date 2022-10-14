#ifndef LIST_H
#define LIST_H

#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
    int data;
    t_list  *next;
};

#endif
