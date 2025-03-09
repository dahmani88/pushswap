/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdahman <abdahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:03:35 by abdahman          #+#    #+#             */
/*   Updated: 2025/03/08 20:36:23 by abdahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **head, char *str)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *head;
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	*head = tmp2;
	if (str)
		write (1, str, 3);
}

void ra(t_stack **head, char *str)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *head;
	tmp2 = tmp1->next;
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = *head;
	(*head)->next = NULL;
	*head = tmp2;
	if (str)
		write (1, str, 3);
}

void rra(t_stack **head, char *str)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *head;
	tmp2 = NULL;
	while (tmp1->next)
	{
		
		if (!tmp2 && tmp1->next->next == NULL)
			tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->next = NULL;
	tmp1->next = *head;
	*head = tmp1;
	if (str)
		write (1, str, 4);
	return ;
}




void	pa(t_stack **head1, t_stack **head2, char *str)
{
	t_stack	*tmp1;

	if (*head1 == NULL)
		return ;
	tmp1 = *head1;
	*head1 = (*head1)->next;
	tmp1->next = *head2;
	*head2 = tmp1;
	if (str)
		write (1, str, 3);
}


