/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:41:39 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/07 00:27:55 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int ft_atoi(char *str, int *check)
{
    int i;
    int signe;
    long res;

    i = 0;
    signe = 1;
    res = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signe = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        if ((res * signe) > INT_MAX || (res * signe) < INT_MIN)
            return (*check = 1, 0);
        i++;
    }
    return ((int)res * signe);
}

int get_max(t_stack *head)
{
    int max;

    max = head->data;
    while (head->next)
    {
        head = head->next;
        if (head->data > max)
            max = head->data;
    }
    return (max);
}

int get_min(t_stack *head)
{
    int min;

    min = head->data;
    while (head->next)
    {
        head = head->next;
        if (head->data < min)
            min = head->data;
    }
    return (min);
}

int is_sorted(t_stack *stack)
{
    while (stack)
    {
        if (stack->next && stack->data > stack->next->data)
            return (0);
        stack = stack->next;
    }
    return (1);
}

int stack_len(t_stack *stack)
{
    int i;

    i = 0;
    while (stack)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}
