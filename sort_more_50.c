/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more_50.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:18:21 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/09 17:44:59 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"

static t_stack *get_max_pointer(t_stack *stack)
{
    t_stack *max_node = stack;
    int max_value = stack->data;
    
    while (stack)
    {
        if (stack->data > max_value)
        {
            max_value = stack->data;
            max_node = stack;
        }
        stack = stack->next;
    }
    return max_node;
}

static void hight_of_b(t_stack **b, t_stack *max_node)
{
    int position = max_node->position;
    int len = stack_len(*b);
    
    if (position > len / 2)
    {
        while ((*b)->data != max_node->data)
            rra(b, "rra\n");
    }
    else
    {
        while ((*b)->data != max_node->data)
            ra(b, "ra\n");
    }
}

static void move_to_stack_a(t_stack **a, t_stack **b)
{
    while (*b)
    {
        t_stack *p_max = get_max_pointer(*b);
        if (!p_max)
            return;
        hight_of_b(b, p_max);
        pa(b, a, "pa\n");
        set_position(b);
    }
}

void sort_more_50(t_stack **stack_a, t_stack **stack_b)
{
    if (is_sorted(*stack_a))
        return;
    set_rank(*stack_a);
    sort_50(stack_a, stack_b);
    sort_3(*stack_a);
    set_position(stack_a);
    move_to_stack_a(stack_a, stack_b);
}
