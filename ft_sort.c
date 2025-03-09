/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:20:01 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/08 23:14:51 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *add_to_stack(int *values, int size)
{
    int i;
    t_stack *head;

    i = 0;
    head = NULL;
    while (i < size)
    {
        add_node(&head, values[i], i);
        i++;
    }
    return (head);
}

void print(t_stack *head)
{
	while (head)
	{
		printf("[%d]", head->data);
		head = head->next;
	}
	printf("\n");
}

void set_rank(t_stack *stack)
{
    t_stack *tmp1;
    t_stack *tmp2;
    int rank;

    tmp1 = stack;
    while (tmp1)
    {
        rank = 0;
        tmp2 = stack;
        while (tmp2)
        {
            if (tmp1->data > tmp2->data)
                rank++;
            tmp2 = tmp2->next;
        }
        tmp1->rank = rank;
        tmp1 = tmp1->next;
    }
}

void ft_sort(int *values, int ac)
{
    t_stack *head_a;
    t_stack *head_b;

    head_b = NULL;
    head_a = add_to_stack(values, ac);
    set_rank(head_a);

    if (is_sorted(head_a) || ac == 1)
        return ;
    if (ac <= 3)
        sort_3(head_a);
    else if (ac <= 50)
        sort_50(&head_a, &head_b);
    else
        sort_more_50(&head_a, &head_b);
}



























