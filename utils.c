/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:53:09 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/26 09:36:52 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*ptr;

	ptr = malloc(sizeof(t_node));
	if (!ptr)
		return (NULL);
	ptr->value = value;
	ptr->next = NULL;
	return (ptr);
}

void	push_front(t_node **head, t_node *node)
{
	if (!head || !node)
		return ;
	node->next = *head;
	*head = node;
}

t_node	*pop_front(t_node **head)
{
	t_node	*p;

	if (!head || !*head)
		return (NULL);
	p = *head;
	*head = p->next;
	p->next = NULL;
	return (p);
}

