/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:19:12 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/01 12:35:48 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_error(void)
{
    write(2, "Error\n", 6);
    return (-1);
}

int is_num(char *str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (str[i] == '\0')
        return (-1);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
        i++;
    }
    return (1);
}

int not_here(int *values, int num,int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        if (values[i] == num)
            return (-1);
        i++;
    }
    return (1);
}

int ft_store(int *values, char **av) {
    int i;
    int check;

    check = 0;
    i = 1;
    while (av[i]) {
        if (is_num(av[i]) == -1)
            return (-1);
        int num = ft_atoi(av[i], &check);
        if (not_here(values, num, i - 1) == -1 || check)
            return (-1);
        values[i - 1] = num;
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int *values;

    if (ac < 2)
        return (is_error());
    values = malloc(sizeof(int) * (ac - 1));
    if (!values)
        return (-1);
    if (ft_store(values, av) == -1)
        return (free(values), is_error());
    ft_sort(values, ac - 1);
    free(values);
    return (0);
}

