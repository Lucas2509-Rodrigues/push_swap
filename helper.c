/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:31:07 by lucas             #+#    #+#             */
/*   Updated: 2026/11/26 10:43:23 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa e sb
int	swap(t_node **head)
{
	t_node	*aux;
	t_node	*aux_2;

	if (!head || !*head || !(*head)->next)
		return 0;
	aux = (*head)->next;
	aux_2 = aux->next;
	aux->next = *head;
	(*head)->next = aux_2;
	*head = aux;
	return 1;
}
//ra rb
int	rotate(t_node **head)
{
	t_node	*aux;
	t_node	*aux_2;

	if (!head || !*head || !(*head)->next)
		return 0;
	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = *head;
	aux_2 = (*head)->next;
	(*head)->next = NULL;
	*head = aux_2;
	return 1;
}
//rra e rrb
int	reverse_rotate(t_node **head)
{
	t_node	*aux;
	t_node	*aux_2;

	if (!head || !*head || !(*head)->next)
		return 0;
	aux = *head;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux_2 = aux->next;
	aux_2->next = *head;
	*head = aux_2;
	aux->next = NULL;
	return 1;
}

int	pp(t_node **dst, t_node **src)
{
    t_node  *p;
    if (!src || !*src || !dst)
        return 0;
    p = pop_front(src);
    push_front(dst, p);
    return 1;
}

void	init_info(t_info *info)
{
	int	i;

    info->a = NULL;
    info->b = NULL;
    info->total = 0;
	i = 0;
    while (i < COUNTS_ACTIONS)
	{
		info->counts[i] = 0;
		i++;
	}
}