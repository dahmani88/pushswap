/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:04:20 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/06 13:59:30 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_stack *stacka)
{
    int max;

    max = get_max(stacka);
    if (stacka->data == max)
        ra(&stacka, "ra\n");
    else if (stacka->next->data == max)
        rra(&stacka, "rra\n");
    if (stacka->data > stacka->next->data)
        sa(&stacka, "sa\n");
    return ;
}