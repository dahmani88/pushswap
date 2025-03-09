/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sor_10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:23:23 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/08 21:33:52 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_position(t_stack **a)
{
    int i;
    t_stack *tmp;

    i = 0;
    tmp = *a;
    while (tmp)
    {
        tmp->position = i;
        tmp = tmp->next;
        i++;
    }
}

void move_to_top(t_stack **a, int rank, int len)
{
    t_stack *tmp = *a;

    while (tmp->rank != rank)
        tmp = tmp->next;
    set_position(a);
    if (tmp->position > len / 2)
        while ((*a)->rank != rank)
            rra(a, "rra\n");
    else
        while ((*a)->rank != rank)
            ra(a, "ra\n");
}

void sort_50(t_stack **a, t_stack **b)
{
    int i = 0;
    int len = stack_len(*a);

    while (len > 3)
    {
        move_to_top(a, i, len);
        pa(a, b, "pb\n");
        len--;
        i++;
    }
    sort_3(*a);
    while (*b)
        pa(b, a, "pa\n");
}
