/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:43:05 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/08 23:25:45 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int data;
    int rank;
    int position;
    struct s_stack* next; 
}t_stack;

int	ft_atoi(char *str, int *check);
void	ft_sort(int *values, int ac);
void	sa(t_stack **head, char *str);
void	ra(t_stack **head, char *str);
void    rra(t_stack **head, char *str);
void    pa(t_stack **head1, t_stack **head2, char *str);
int get_max(t_stack *head);
void sort_3(t_stack *stacka);
int is_sorted(t_stack *stack);
int get_min(t_stack *head);
int stack_len(t_stack *stack);
void sort_50(t_stack **a, t_stack **b);
void add_node(t_stack **head, int data, int position);
void	sort_more_50(t_stack **stack_a, t_stack **stack_b);
void set_position(t_stack **a);
void set_rank(t_stack *stack);

#endif